#include<cstdio>
#include<algorithm>
using namespace std; // 这句不能漏掉，否则无法使用下面的 sort函数 
// dz 2020-1-9 20:42:50 PAT B1019 

int cmp(int a, int b){
	return a>b; // 递减排序cmp 
} 

void to_array(int n, int num[]){ // 数字变为数组 
	for(int i=3; i>=0; i--){
		num[i] = n%10;
		n = n/10;
	}
}

int to_num(int num[]){
	int n=0;
	for(int i=0; i<4; i++){
		n = n*10 + num[i];
	}
	return n;
}

int main(){
	int n, num[4], MIN, MAX;
	scanf("%d",&n);
	
	while(1){
		to_array(n, num);
	
		sort(num, num+4); // 递增排序 
		MIN = to_num(num);
		
		sort(num, num+4, cmp); // 递减排序 
		MAX = to_num(num);
		
		n = MAX - MIN;
		printf("%04d - %04d = %04d\n", MAX, MIN, n); // 不够位的用 0 填充 
		
		if(n==0 || n==6174) break;
	}

	
	return 0;
}




