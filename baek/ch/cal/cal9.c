#include <stdio.h>

int main() {
	int A ,B;
	int sum = 0;
	int j = 1;
	scanf("%d %d", &A, &B);
	for(int i =0;i<3;i++){
		int rB = B%10;
		B /= 10;
		printf("%d\n",A*rB);
		sum += A*rB*j;
		j *= 10;
	}
	printf("%d\n", sum);
}