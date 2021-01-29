#include <stdio.h>

int main() {
	int array[5];
	int sum = 0;
	for(int i=0;i<5;i++){
		scanf("%d",&array[i]);
		if(array[i]<=40)
			array[i] = 40;
	}
	for(int j=0;j<5;j++){
		sum += array[j];
	}
	printf("%d",sum/5);
}