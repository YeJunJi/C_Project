#include <stdio.h>

int count(int N){
	int cnt=0;
	while(N>0){
		N/=10;
		cnt++;
	}
	return cnt;
}

int power10(int n){
	if(n == 1)
		return 1;
	return 10* power10(n-1);
}

int max(int k){
	int max = 0;
	for(int i=0;i<k;i++){
		max += 9*(power10(i+1)+1);
	}
	return max;
}

int main(){
	int N, cnt;
	scanf("%d", &N);
	cnt = count(N);
	int a[cnt];
	for(int i=0;i<cnt;i++){
		a[i] = 0;
	}
	int k = power10(cnt);
	for(int i=cnt;i>0;i--){
		while(N-(k+1)*a[i-1]>max(i-1)){
			a[i-1]++;
		}
		N-=(k+1)*a[i-1];
		k/=10;
	}
	int fnum=0;
	for(int i=cnt;i>0;i--){
		fnum += a[i-1]*power10(i);
	}
	printf("%d", fnum);
}