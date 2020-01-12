#include<cstdio>
// dz 2020-1-9 20:57:58 求最大公约数 

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

int main(){
	int m, n, k;
	if(scanf("%d %d",&m, &n) != EOF){
		k = gcd(m, n); // 最大公约数
		printf("%d\n", k); 
		
		printf("%d\n", m/k*n); // 最小公倍数 = mn/k 因为 mn 可能溢出，所以替换为 m / k * n  
	}
	return 0;
}
