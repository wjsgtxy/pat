#include <cstdio>
#include <cstring>
#include <algorithm> 
// dz 2020-1-4 21:21:23 A1025 PAT排名 

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
			scanf("%s %d",stu[num].id, &stu[num].score); // ??? 为啥后面要用取地址符号，前面不用, 因为 id是字符数组 
			stu[num].location_number = i; // 考场号从 1-N 注意！！！，所以上面i要从1开始，到i<=n 结束 
			num++; 
		}
		sort(stu+num-k, stu+num, cmp);
		stu[num-k].local_rank = 1;
		for(int j=num-k+1; j<num; j++){
			if(stu[j].score == stu[j-1].score) {
				stu[j].local_rank = stu[j-1].local_rank; 
			}else{
				//stu[j].local_rank = stu[j-1].local_rank + 1; 
				stu[j].local_rank = j + 1 - (num-k); // 重要！！！ j是从num-k+1 这里开始的，不是从0开始的 
			} 
		}
	}
	
	printf("%d\n", num);
	sort(stu,stu+num,cmp);
	int r=1;
	for(int i=0; i<num; i++){
		if(i>0 && stu[i].score!=stu[i-1].score){ // i>0条件 如果后一个考生和前一个考生分数不同，则排名等于目前的总人数，如果相同，则r不变，即不用处理！！！ 
			r=i+1;
		}
		printf("%s ", stu[i].id);
		printf("%d %d %d\n", r, stu[i].location_number, stu[i].local_rank);
	}
	return 0; 
}
