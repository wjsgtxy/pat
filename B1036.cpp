#include<cstdio>
//dz 2020-1-1 22:00:49  
int main(){
	int n;
	char c;
	scanf("%d %c", &n, &c); 
	int row, col=n;
	if(n%2==1)
		row = n/2+1;
	else 
		row = n/2; 
	
	for(int i=0; i < row; i++){
		if(i==0 || i==row-1){ // ��һ�к����һ�� 
			for(int j=0; j<n; j++)
				printf("%c",c);
			printf("\n");
		}else{
			printf("%c",c); // ��������ʼ 
			for(int j=0; j<col-2; j++) // �ո����Ҫ�� 2  
				printf(" "); 
			printf("%c\n",c); // �����н�����Ҫ��һ�����з������� 
		}

	} 
	
	return 0;
}
