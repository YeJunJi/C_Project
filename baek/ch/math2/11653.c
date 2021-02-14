#include <stdio.h>

int main(){
	int n,p=2;
	scanf("%d", &n);

	while(n!=1){
		if(n%p==0){
			n/=p;
			printf("%d\n", p);
		}
		else{
			p++;
		}
	}
}