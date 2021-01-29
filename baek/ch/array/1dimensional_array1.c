#include <stdio.h>

int max(int array[],int N){
	int maximum=-1000000;
	for(int i=0;i<N;i++){
		if(array[i]>=maximum)
			maximum = array[i];
	}
	return maximum;
}

int min(int array[],int N){
	int minimun = 1000000;
	for(int i=0; i<N; i++){
		if(array[i]<=minimun){
			minimun = array[i];
		}
	}
	return minimun;
}




int main() {
	int N;
	scanf("%d",&N);
	int array[N];
	for(int i=0;i<N;i++){
		scanf("%d",&array[i]);
	}
	printf("%d %d", min(array,N), max(array,N));
}