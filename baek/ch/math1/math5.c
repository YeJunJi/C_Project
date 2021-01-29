#include <stdio.h>

int main(){
	int a, b, v, n;
	scanf("%d %d %d", &a, &b, &v);
	if((v-b)%(a-b)==0)
		n = (v-b)/(a-b);
	else
		n = (v-b)/(a-b) + 1;
	printf("%d\n", n);
}