#include <stdio.h>
#include <stdlib.h>

int main(){
	char arr[1000000];
	int count=0;
	scanf("%[^\n]",arr);
	for(int i=0;i<1000000;i++){
		if(arr[i]=='\0')
			break;
		else if(('A'<=arr[i] && arr[i]<='Z') || ('a'<=arr[i] && arr[i]<='z')){
			if(arr[i+1]==' '|| arr[i+1]=='\0'){
				count++;
			}
		}
	}
	printf("%d\n", count);
}