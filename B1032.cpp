#include<cstdio>
// dz 2020-1-1 21:23:23 PAT_B1032  
const int maxn = 100010;
int main(){
	
	int n=0;
	//char[] str;
	int schoolMax[maxn]={0};
	scanf("%d", &n);

	int schId, score=0;
	for(int i=1; i<=n; i++){ // �ص㣬��������ѭ����ȡ�������ݣ����� 
		scanf("%d %d", &schId, &score); // ѧУID��ѧУ�������� 
		schoolMax[schId] += score;
	}	
	
	int maxSchID=-1, maxScore = -1;
	for(int i=1; i<=n; i++){
		if(schoolMax[i] > maxScore){
			maxSchID = i;
			maxScore = schoolMax[i];
		}
			
	}
	
	printf("%d %d", maxSchID, maxScore);
	return 0;
}
