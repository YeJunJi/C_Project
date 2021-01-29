#include <stdio.h>

int power10(int n){
	if(n==1)
		return 1;
	else
		return power10(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int tmp = i, a[7] = {0}, sum=0, j=0;
		while(tmp>0){
			a[j++] = tmp%10;
			tmp/=10;
		}
		for(int k=0;k<7;k++){
			sum +=a[k];
		}
		if(i+sum==n){
			printf("%d", i);
			break;
		}
		else if(i==n){
			printf("0");
			break;
		}
	}

}