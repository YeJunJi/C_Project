#include <stdio.h>

int main(){
	int N, a=0,b=0;
	scanf("%d", &N);
	while(1){
		if(N>=15){
			N-=5;
			a++;
		}
		else{
			if(N==0)
				break;
			else if(N<=2){
				printf("-1\n");
				return 0;
			}
			else if(N%3==0){
				N-=3;
				b++;
			}
			else{
				N-=5;
				a++;
			}
		}
	}
	printf("%d\n", a+b);
}