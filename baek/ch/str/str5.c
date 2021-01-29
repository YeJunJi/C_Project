#include <stdio.h>

int main(){
	char arr[1000000]={0,};
	int maxi, count=0, max=0,a[26] = {0,};
	scanf("%s", &arr);
	for(int i=0;i<1000000;i++){
		if(arr[i]=='\0')
			break;
		else if('A'<=arr[i]&&arr[i]<='Z')
			a[arr[i]-'A']++;
		else if('a'<=arr[i]&&arr[i]<='z')
			a[arr[i]-'A'-32]++;
	}
	for(int i=0;i<26;i++){
		if(a[i]>max){
			max = a[i];
			maxi = i;
		}
	}
	for(int i=0;i<26;i++){
		if(count == 2){
			printf("?\n");
			return 0;
		}
		else if(a[i]==max)
			count++;
	}
	printf("%c\n", maxi+'A');
}