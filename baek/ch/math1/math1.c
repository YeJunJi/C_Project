#include <stdio.h>

int main(){
	int A, B, C, n;
	scanf("%d %d %d", &A, &B, &C);
	if(B>=C)
		printf("-1\n");
	else{
		n = A/(C-B)+1;
		printf("%d\n", n);
	}
}