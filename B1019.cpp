#include<cstdio>
#include<algorithm>
using namespace std; // ��䲻��©���������޷�ʹ������� sort���� 
// dz 2020-1-9 20:42:50 PAT B1019 

int cmp(int a, int b){
	return a>b; // �ݼ�����cmp 
} 

void to_array(int n, int num[]){ // ���ֱ�Ϊ���� 
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
	
		sort(num, num+4); // �������� 
		MIN = to_num(num);
		
		sort(num, num+4, cmp); // �ݼ����� 
		MAX = to_num(num);
		
		n = MAX - MIN;
		printf("%04d - %04d = %04d\n", MAX, MIN, n); // ����λ���� 0 ��� 
		
		if(n==0 || n==6174) break;
	}

	
	return 0;
}




