#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int cnt =1;
	int N2 = N%10;
	int N1 = N/10;
	int fN =(N1+N2)%10+N2*10;
	while(fN!=N){
		N2 = fN%10;
		N1 = fN/10;
		fN =(N1+N2)%10+N2*10;
		cnt++;
	}
	printf("%d\n",cnt);
}