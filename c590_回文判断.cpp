#include<cstdio>
#include<cstring>
// dz 2020-1-2 20:42:18 �����ж� 
const int maxn = 256;

bool judge(char str[]){
	int length = strlen(str); // ��ȡ�ַ�������
	for(int i=0; i<length/2; i++){
		if(str[i] != str[length-1-i])
			return false;
	}
	return true; 
}

int main(){
	char str[maxn];
	while(gets(str)){ // ����������һֱѭ�����벻�˳�������һ�����ʾ͸����ж��Ƿ��ǻ��� 
		bool flag = judge(str);
		if(flag == true)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
} 
