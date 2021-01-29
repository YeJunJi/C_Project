#include <stdio.h>

int main(){
	int a, b, arr[1000000];
	for(int i=0;i<1000000;i++){
		arr[i] = i+1;
	}
	arr[0] = 0; arr[1] = 0;

	scanf("%d %d", &a, &b);

	for(int i=2;i<1000000;i++){
		if(arr[i]!=0){
			for(int j=2*i;j<1000000;j+=i)
				arr[j-1] = 0;
		}
	}
	for(int i=a-1;i<+b-1;i++){
		if(arr[i-1]!=0)
			printf("%d\n", arr[i]);
	}
}