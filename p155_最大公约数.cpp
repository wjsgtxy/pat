#include<cstdio>
// dz 2020-1-9 20:57:58 �����Լ�� 

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

int main(){
	int m, n, k;
	if(scanf("%d %d",&m, &n) != EOF){
		k = gcd(m, n); // ���Լ��
		printf("%d\n", k); 
		
		printf("%d\n", m/k*n); // ��С������ = mn/k ��Ϊ mn ��������������滻Ϊ m / k * n  
	}
	return 0;
}
