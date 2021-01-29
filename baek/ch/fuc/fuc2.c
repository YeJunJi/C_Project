#include <stdio.h>

int main(){
	int arr[10000];
	for(int i=1;i<10000;i++){
		int sum=0, j=i;
		while(j>0){
			int tmp = j%10;
			sum+= tmp;
			j/=10;
		}
		arr[i] = i+sum;
	}
	for(int i=0;i<10000;i++){
		for(int j=0;j<10000;j++){
			if(i == arr[j]){
				break;
			}
			else if(j==9999)
				printf("%d\n", i);
		}
	}
}