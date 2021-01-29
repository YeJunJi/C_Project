#include <stdio.h>

int main(){
	int C, N, num;
	scanf("%d",&C);

	for(int i=0; i<C;i++){
		scanf("%d", &N);
		int arr[N],count = 0, sum =0;
		for(int j=0;j<N;j++){
			scanf("%d", &arr[j]);
			sum+=arr[j];
		}
		for(int j=0;j<N;j++){
			if(arr[j]>sum/N)
				count++;
		}
		printf("%.3lf%\n",(double)count/(double)N*100);
	}
}