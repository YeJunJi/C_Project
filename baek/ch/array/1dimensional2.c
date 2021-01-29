#include <stdio.h>

int main(){
	int array[9];
	int maximun = 0;
	int cnt;
	for(int i=0;i<9;i++)
		scanf("%d",&array[i]);
	for(int i=0; i<9;i++){
		if(array[i]>maximun){
			maximun = array[i];
			cnt = i+1;
		}
	}
	printf("%d\n%d", maximun,cnt);
}