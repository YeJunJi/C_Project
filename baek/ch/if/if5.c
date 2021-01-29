#include <stdio.h>

int main() {
	int H,M,wake_time;
	scanf("%d %d",&H,&M);
	int Total_time = H*60 + M;
	wake_time = Total_time - 45;
	if(Total_time-45<0)
		wake_time = 1440-45+M;
	H = wake_time / 60;
	M = wake_time % 60;
	printf("%d %d", H,M);
	
}