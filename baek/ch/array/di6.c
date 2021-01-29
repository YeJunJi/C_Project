#include <stdio.h>

int main(){
	int n;
	char arr[80];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s", &arr);
		int sum = 0, count =1;
		for(int j=0;j<80;j++){
			if(arr[j]!= 'O' && arr[j]!='X')
				break;
			else if(arr[j] == 'O'){
				sum+=count++;
			}
			else if(arr[j] == 'X'){
				count = 0;
				sum+=count++;
			}
		}
	printf("%d\n", sum);
	}

}