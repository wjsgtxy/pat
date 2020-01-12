#include <cstdio>
// dz 2020-1-1 21:46:59 ¿Î±¾p87 
const int maxn = 210;
int a[maxn];

int main(){
	int n, x; 
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);		
	}
	
	scanf("%d", &x);
	int k=-1;
	for(int i=0; i<n; i++){
		if(a[i]==x){
			k=i;
			break;	
		}			
	}
	printf("%d",k);
	
	return 0;
}
