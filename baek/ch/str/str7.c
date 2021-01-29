#include <stdio.h>

int print(int arr[]){
	for(int i=0;i<3;i++)
		printf("%d", arr[i]);
}


int main(){
	int num1,num2,n1[3],n2[3];
	scanf("%d %d", &num1, &num2);
	for(int i=0;i<3;i++){
		n1[i]=num1%10; n2[i]=num2%10;
		num1/=10; num2/=10;
	}
	if(n1[0]>n2[0])
		print(n1);
	else if(n1[0]<n2[0])
		print(n2);
	else
		if(n1[1]>n2[1])
			print(n1);
		else if(n1[1]<n2[1])
			print(n2);
		else
			if(n1[2]>n2[2])
				print(n1);
			else
				print(n2);
}