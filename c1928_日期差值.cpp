#include<cstdio>
// dz 2020-1-2 12:02:41 日期差值 课本p91
int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}}; // 12个月份平年闰年的天数 
// 闰年判断函数
bool isLeapYear(int year){
	return (year%4==0&&year%100!=0) || (year%400==0); // ? true : false; 不用这种三元运算符，前面这种就可以了 
} 

int main(){
	int date1, y1, m1, d1;
	int date2, y2, m2, d2;
	
	scanf("%d",&date1);
	scanf("%d",&date2);
	if(date2 < date1){ // 默认date1小于date2, 如果不是，则交换
		int temp = date1;
		date1 = date2;
		date2 = temp; 
	}
	
	y1 = date1 / 10000;
	//m1 = (date1 - y1*10000) / 100;
	m1 = date1%10000 / 100; // 这样更简单！！！ 
	//d1 = date1 - y1*10000 - m1*100;
	d1 = date1 % 100; // 这样更简单！！！ 
	
	y2 = date2 / 10000;
	m2 = (date2 - y2*10000) / 100;
	d2 = date2 - y2*10000 - m2*100;
	
	int count = 0;
	int isLeap;
	while((y1<y2) || (m1<m2) || (d1<d2)){ // 逻辑关系应该是或，而不是与！！！ 
		d1++;
		isLeap = isLeapYear(y1); 
		if(d1>month[m1][isLeap]){ // 超过了当月的天数 
			m1 += 1;
			d1 = 1; 
		}
		if(m1>12){
			y1 += 1;
			m1 = 1;	
		}
		count++;
	}
	
	//int year = 2000;
	//printf("%d", isLeapYear(year)); 
	//printf("y1:%d, m1:%d, d1:%d", y1, m1, d1);
	printf("%d",count+1);
	return 0;
}
