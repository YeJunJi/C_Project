#include <stdio.h>

void swap(double array[], int x, int y){
	double tmp = array[y];
	array[y] = array[x];
	array[x] = tmp;
}

int main(){
	int n;
	scanf("%d\n",&n);
	double num[n], Max_score;
	double New_Num[n];
	double sum = 0;
	for(int i=0;i<n;i++){
		scanf("%lf",&num[i]);
	}
	for(int i=0;i<n-1;i++){
		if(num[i]>num[i+1]){
			Max_score = num[i];
			swap(num,i,i+1);
		} else Max_score = num[i+1];
	}
	for(int i=0;i<n;i++){
		New_Num[i] = num[i] / Max_score * 100;
		sum += New_Num[i];
	}
	printf("%lf", sum/n);
}