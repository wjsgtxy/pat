#include<cstdio>
// dz 2020-1-2 17:23:16 B1022 
int main(){
	int a, b, d;
	scanf("%d %d %d", &a, &b, &d);
	int c = a + b;
	char nums[35], num=0;
	do{
		nums[num++] = c%d;
		c = c/d;	
	} while(c!=0);
	
	//printf("%s", nums);
	for(int i = num-1; i>=0; i--){
		printf("%d",nums[i]); // ע�⣡���� ����ȡ�෨�������������λ��Ҫ������������� 
	} 
	return 0;
}