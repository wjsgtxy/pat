#include<cstdio>
#include<cstring>
// dz 2020-1-2 20:42:18 回文判断 
const int maxn = 256;

bool judge(char str[]){
	int length = strlen(str); // 获取字符串长度
	for(int i=0; i<length/2; i++){
		if(str[i] != str[length-1-i])
			return false;
	}
	return true; 
}

int main(){
	char str[maxn];
	while(gets(str)){ // ！！！可以一直循环输入不退出，输入一个单词就给你判断是否是回文 
		bool flag = judge(str);
		if(flag == true)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
} 
