#include <stdio.h>
// ð������ 

int main(){	
	int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
	
	int i, j, temp, isSorted;
	
	//�Ż��㷨�������� n-1 �ֱȽ�
	for(i=0; i<10-1; i++){
	
		isSorted = 1; //����ʣ�µ�Ԫ���Ѿ��������
	
		for(j=0; j<10-1-i; j++){
		
			if(nums[j] > nums[j+1]){
			
				temp = nums[j];
				
				nums[j] = nums[j+1];
				
				nums[j+1] = temp;
				
				isSorted = 0; //һ����Ҫ��������Ԫ�أ���˵��ʣ�µ�Ԫ��û�������
			
			}
		
		}
		
		if(isSorted) break; //���û�з���������˵��ʣ�µ�Ԫ���Ѿ��������
	
	}
	
	
	for(i=0; i<10; i++){
	
		printf("%d ", nums[i]);
	
	}
	
	printf("\n");
	
	return 0;

}
