#include <stdio.h>

int main(){
	int N,a, cnt=0;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf("%d",&a);
		if(a == 1)
			continue;
		else if(a == 2||a ==3)
			cnt++;
		else{
			for(int j=2;j<=a/2;j++){
				if(a%j==0)
					break;
				else if(j==a/2)
					cnt++;
			}
		}
	}
	printf("%d\n", cnt);
}