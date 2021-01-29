#include <stdio.h>

int main(){
	int n, count=0, arr[3];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int k =i;
		if(1<=i && i<=99)
			count++;
		else if(100<=i && i <1000){
			for(int j=0;j<3;j++){
				arr[j] = k%10;
				k/=10;
			}
			if(arr[0]-arr[1]== arr[1]-arr[2])
				count++;
		}
	}
	printf("%d\n", count);
}