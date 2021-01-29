#include <stdio.h>

int add(int k){
	int a = k*(k+1)/2;
	return a;
}

void array(int a[14][14]){
	for(int i=0;i<14;i++){
		for(int j=0;j<14;j++){
			if(i==0)
				a[i][j] = add(j+1);
			else if(j==0)
				a[i][j] = 1;
			else
				a[i][j] = a[i-1][j]+a[i][j-1];
		}
	}
}

int main(){
	int N,k,n,arr[14][14]={0,};
	scanf("%d",&N);
	array(arr);
	for(int q=0;q<N;q++){
		scanf("%d %d",&k, &n);
		printf("%d\n", arr[k-1][n-1]);
	}
}