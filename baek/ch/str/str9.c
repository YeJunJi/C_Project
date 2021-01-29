#include <stdio.h>

int main(){
	char arr[100]={0,};
	int count=0;
	scanf("%s",arr);
	for(int i=0;i<100;i++){
		if(arr[i]=='\0')
			break;
		else
			count++;
			if(arr[i]=='c'){
				if(arr[i+1]=='='||arr[i+1]=='-')
					i++;
			}
			else if(arr[i]=='d'){
				if(arr[i+1]=='z' && arr[i+2]=='=')
					i+=2;
				else if(arr[i+1]=='-')
					i++;
			}
			else if(arr[i]=='l'&&arr[i+1]=='j')
				i++;
			else if(arr[i]=='n'&&arr[i+1]=='j')
				i++;
			else if(arr[i]=='s'&&arr[i+1]=='=')
				i++;
			else if(arr[i]=='z'&&arr[i+1]=='=')
				i++;
	}
	printf("%d\n", count);
}