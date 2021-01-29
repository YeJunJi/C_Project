#include <stdio.h>

int search(char arr[]){
	for(int i=0;i<100;i++){
		if(arr[i]=='\0')
			break;
		for(int j=0;j<100;j++){
			if(i==j)
				continue;
			if(arr[i]==arr[j])
				return 0;
		}
	}
	return 1;
}

int main(){
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char arr[100]={0,},b[100]={0,};
		int k=0;
		scanf("%s",arr);
		for(int j=0;j<100;j++){
			if(arr[j]=='\0')
				break;
			else{
				if(arr[j]!=arr[j+1])
					b[k++] = arr[j];
			}
		}
		cnt += search(b);
	}
	printf("%d\n", cnt);
}