#include <stdio.h>
char print(){

}
int main(){
	int n,x=1;
	scanf("%d",&n);
	while(1){
		if(n<=x*(x+1)/2)
			break;
		x++;
	}
	int k = x*(x+1)/2-n;
	if(x%2==0)
		printf("%d/%d\n", x-k, k+1);
	else
		printf("%d/%d\n",k+1,x-k);
}