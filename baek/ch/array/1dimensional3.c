#include <stdio.h>

int main(){
	int A,B,C;
	int cnt =0;
	scanf("%d %d %d",&A, &B, &C);
	int num = A*B*C;
	int number = num;
	while(num>0){
		num /=10;
		cnt++;
	}
	int array[cnt];
	for(int i=0; i<cnt;i++){
		array[i] = number%10;
		number /=10;
	}
	int place[10] = {0,};
	for(int i=0;i<cnt;i++){
		for(int j=0;j<10;j++){
			if(array[i]==j)
				place[j]++;
		}

	}
	for(int i=0;i<10;i++)
		printf("%d\n", place[i]);
}