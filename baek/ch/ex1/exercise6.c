#include <stdio.h>

int odd_line(int n){
	printf("*");
	for(int i=2;i<n;i=i+2)
	{
		printf(" *");
	}
	printf("\n");
}

int even_linve(int n){
	for(int i=1;i<n;i=i+2){
		printf(" *");
	}
	printf("\n");
}


int main() {
	int n;
	scanf("%d",&n);
	for(int k=0;k<n;k++){
		odd_line(n);
		even_linve(n);
	}
}