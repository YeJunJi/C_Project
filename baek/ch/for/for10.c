#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	for(int i=N;i>0;i--){
		for(int j=1; j<i;j++)
			printf(" ");
		for(int k=0;i+k<N+1;k++)
			printf("*");
		printf("\n");
	}
}