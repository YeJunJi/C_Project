#include <stdio.h>

int main(){
	int t, h, w, n, a, b;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d", &h, &w, &n);
		if(n%h==0){
			a = h; b = n/h;
		}
		else{
			a = n%h; b = n/h+1;
		}
		printf("%d\n",100*a+b);
	}
}