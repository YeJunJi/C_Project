#include <stdio.h>

int main(){
	int n, x=1;
	scanf("%d",&n);
	if(n==1)
		printf("1\n");
	else{
		while(1){
			if(n<=3*x*x+3*x+1)
				break;
			x++;
		}
		printf("%d\n", x+1);
	}
}