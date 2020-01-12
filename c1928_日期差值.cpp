#include<cstdio>
// dz 2020-1-2 12:02:41 ���ڲ�ֵ �α�p91
int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}}; // 12���·�ƽ����������� 
// �����жϺ���
bool isLeapYear(int year){
	return (year%4==0&&year%100!=0) || (year%400==0); // ? true : false; ����������Ԫ�������ǰ�����־Ϳ����� 
} 

int main(){
	int date1, y1, m1, d1;
	int date2, y2, m2, d2;
	
	scanf("%d",&date1);
	scanf("%d",&date2);
	if(date2 < date1){ // Ĭ��date1С��date2, ������ǣ��򽻻�
		int temp = date1;
		date1 = date2;
		date2 = temp; 
	}
	
	y1 = date1 / 10000;
	//m1 = (date1 - y1*10000) / 100;
	m1 = date1%10000 / 100; // �������򵥣����� 
	//d1 = date1 - y1*10000 - m1*100;
	d1 = date1 % 100; // �������򵥣����� 
	
	y2 = date2 / 10000;
	m2 = (date2 - y2*10000) / 100;
	d2 = date2 - y2*10000 - m2*100;
	
	int count = 0;
	int isLeap;
	while((y1<y2) || (m1<m2) || (d1<d2)){ // �߼���ϵӦ���ǻ򣬶������룡���� 
		d1++;
		isLeap = isLeapYear(y1); 
		if(d1>month[m1][isLeap]){ // �����˵��µ����� 
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
