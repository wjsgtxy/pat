#include <cstdio>
#include <cstring>
#include <algorithm> 
// dz 2020-1-4 21:21:23 A1025 PAT���� 

using namespace std;
struct Student {
	char id[15];
	int score;
	int location_number;
	int local_rank;
}stu[30010];

bool cmp(Student a, Student b){
	if (a.score!=b.score) return a.score>b.score;
	else return strcmp(a.id, b.id) < 0;
}

int main(){
	int n, k, num = 0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){  
		scanf("%d",&k);
		for(int j=0; j<k; j++){
			scanf("%s %d",stu[num].id, &stu[num].score); // ??? Ϊɶ����Ҫ��ȡ��ַ���ţ�ǰ�治��, ��Ϊ id���ַ����� 
			stu[num].location_number = i; // �����Ŵ� 1-N ע�⣡��������������iҪ��1��ʼ����i<=n ���� 
			num++; 
		}
		sort(stu+num-k, stu+num, cmp);
		stu[num-k].local_rank = 1;
		for(int j=num-k+1; j<num; j++){
			if(stu[j].score == stu[j-1].score) {
				stu[j].local_rank = stu[j-1].local_rank; 
			}else{
				//stu[j].local_rank = stu[j-1].local_rank + 1; 
				stu[j].local_rank = j + 1 - (num-k); // ��Ҫ������ j�Ǵ�num-k+1 ���￪ʼ�ģ����Ǵ�0��ʼ�� 
			} 
		}
	}
	
	printf("%d\n", num);
	sort(stu,stu+num,cmp);
	int r=1;
	for(int i=0; i<num; i++){
		if(i>0 && stu[i].score!=stu[i-1].score){ // i>0���� �����һ��������ǰһ������������ͬ������������Ŀǰ���������������ͬ����r���䣬�����ô��������� 
			r=i+1;
		}
		printf("%s ", stu[i].id);
		printf("%d %d %d\n", r, stu[i].location_number, stu[i].local_rank);
	}
	return 0; 
}