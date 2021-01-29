#include <stdio.h>

//등수를 메기는 방법... 정렬을 사용하지 않고 단순히 rank라는 값을 변화시킨다.

typedef struct 
{
	int weight;
	int height;
	int rank;
	
} person;

int main(){
	int n, rank;
	scanf("%d", &n);

	person a[n];
	for(int i=0; i<n; i++){
		scanf(" %d %d", &a[i].weight, &a[i].height);
		a[i].rank = 1;
	}


	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			if (a[i].weight<a[j].weight && a[i].height<a[j].height)
			{
				a[i].rank++;
			}
		}
	}

	for(int i=0;i<n;i++){
		if(i == n-1){
			printf("%d", a[i].rank);
		}
		else{
			printf("%d ", a[i].rank);
		}
	}

}
