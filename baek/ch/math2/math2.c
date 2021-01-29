#include <stdio.h>
int isprime(int a){
	if(a==1)
		return 0;
	else if(a==2||a==3)
		return a;
	else{
		for(int i=2;i<=a/2;i++){
			if(a%i==0)
				return 0;
		}
		return a;
	}
}


int main(){
	int m, n, sum=0, min=0;
	scanf("%d %d", &m, &n);
	for(int i=m;i<=n;i++){
		if(isprime(i)!=0){
			sum+=isprime(i);
			if(min==0)
				min = isprime(i);
			else{
				if(min>isprime(i))
					min = isprime(i);
			}
		}
	}
	if(sum==0)
		printf("-1\n");
	else
		printf("%d\n%d", sum, min);
}