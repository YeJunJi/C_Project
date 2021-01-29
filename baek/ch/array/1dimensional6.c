#include <stdio.h>


int main(){
	int n;
	int cnt = 0;
	scanf("%d\n",&n);
	char str[80];
	int sum[n];
	for(int i=0; i<n;i++){
		scanf("%s\n", &str[80]);
		for(int j=0;j<80;j++){
			if(str[j]=='O')
				cnt++;
			else
				cnt = 0;
			sum[i]+=cnt;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d\n", sum[i]);
}