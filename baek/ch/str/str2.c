#include <stdio.h>

int main(){
	int n,sum =0;
	scanf("%d",&n);
	char arr[n+1], num;
	scanf("%s", &arr);
	arr[n] = '\0';
	for(int i=0;i<n;i++){
		if('0'<=arr[i]&&arr[i]<='9')
			sum+=(int) (arr[i]-'0');
	}
	printf("%d\n", sum);
}