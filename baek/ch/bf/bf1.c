#include <stdio.h>

int main(){
	int N, M, p=0, win;
	scanf("%d %d ", &N, &M);
	int a[N];
	int c = N*(N-1)*(N-2)/6;
	int close[c];
	for(int i=0;i<N;i++){
		scanf(" %d", &a[i]);
	}
	for(int i=0;i<N-2;i++){
		for(int j=i+1;j<N-1;j++){
			for(int k=j+1;k<N;k++){
				close[p++]=a[i]+a[j]+a[k];
			}
		}
	}
	int j = 0;
	for(int i=0;i<c;i++){
		if(j==0){
			if(close[i]<=M){
				win = close[i];
				j++;
			}
		}
		else{
			if(win<close[i] && close[i]<=M){
				win = close[i];
			}
		}
	}
	printf("%d", win);
}