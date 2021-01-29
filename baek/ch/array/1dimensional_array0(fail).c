#include <stdio.h>

int max(int array[],int N){
	int maximum;
	for(int i=0;i<N;i++){
		if(array[i]>=array[i+1]){
			maximum = array[i];
			array[i+1]=array[i];
		}
		else
			maximum = array[i+1];
	}
	return maximum;
}

int min(int array[],int N){
	int minimun;
	for(int i=0; i<N; i++){
		if(array[i]<=array[i+1]){
			minimun = array[i];
			array[i+1]=array[i];
		}
		else
			minimun = array[i+1];
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