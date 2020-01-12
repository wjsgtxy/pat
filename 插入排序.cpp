#include <stdio.h>

int main(){	

int a[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};

int i, j=10, temp, isSorted;

for(i=2; i<10; i++){
	if(a[i] < a[i-1]){
		a[0]=a[i];
		for(j=i-1; a[0]<a[j]; j--){
			a[j+1]=a[j];
		}
		a[j+1]=a[0];
	}
}


for(i=0; i<10; i++){

printf("%d ", a[i]);

}

printf("\n");


return 0;

}
