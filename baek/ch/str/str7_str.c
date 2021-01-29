#include <stdio.h>

void reverse(char arr[]){
	char tmp = arr[0];
	arr[0] = arr[2];
	arr[2] = tmp;
}

int main(){
	char n1[3],n2[3];
	scanf("%s %s", n1, n2);
	reverse(n1); reverse(n2);
	if((int)n1>(int)n2)
		printf("%s\n", n1);
	else
		printf("%s\n", n2);
}