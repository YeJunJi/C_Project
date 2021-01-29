#include <stdio.h>

int main(){
	char arr[15] = {0,};
	int cnt =0, sum = 0,num[15] = {0,};
	scanf("%s",arr);
	for(int i=0;i<15;i++){
		if(arr[i]=='\0')
			break;
		else
			cnt++;
			if(arr[i]<='C')
				num[i] = 2;
			else if(arr[i]<='F')
				num[i] = 3;
			else if(arr[i]<='I')
				num[i] = 4;
			else if(arr[i]<='L')
				num[i] = 5;
			else if(arr[i]<='O')
				num[i] = 6;
			else if(arr[i]<='S')
				num[i] = 7;
			else if(arr[i]<='V')
				num[i] = 8;
			else if(arr[i]<='Z')
				num[i] = 9;
	}
	for(int i=0;i<15;i++)
		sum += num[i];
	sum+=cnt;
	printf("%d\n", sum);
}