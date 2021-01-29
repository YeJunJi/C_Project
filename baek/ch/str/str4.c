#include <stdio.h>

int main(){
	int n, c;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char arr[20] = {0,};
		scanf("%d", &c);
		scanf("%s", arr);
		for(int j=0;j<20;j++)
		{
			if(arr[j]=='\0')
				break; 
			for(int k=0;k<c;k++)
				printf("%c", arr[j]);
		}
		printf("\n");
	}

}