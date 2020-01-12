#include<stdio.h>
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
	int i;
	for(i = num-1; i>=0; i--){ // dz  `for' loop initial declaration used outside C99 mode 错误是因为老版本的 c 只能把 for 中 i 的定义放在外面，新的就可以了！ 
		printf("%d",nums[i]); // 注意！！！ 除基取余法，最后面的是最高位，要反向输出！！！ 
	} 
	return 0;
}
