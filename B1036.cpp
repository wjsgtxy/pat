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
		if(i==0 || i==row-1){ // 第一行和最后一行 
			for(int j=0; j<n; j++)
				printf("%c",c);
			printf("\n");
		}else{
			printf("%c",c); // 其他行起始 
			for(int j=0; j<col-2; j++) // 空格个数要减 2  
				printf(" "); 
			printf("%c\n",c); // 其他行结束，要加一个换行符！！！ 
		}

	} 
	
	return 0;
}
