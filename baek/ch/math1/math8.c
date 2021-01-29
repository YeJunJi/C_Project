#include <stdio.h>

int main(){
	int x, y, T,fnum;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		int k=1;
		scanf("%d %d", &x, &y);
		if(y-x == 1)
			fnum = 1;
		else if(y-x==2)
			fnum = 2;
		else{
			while(1){
				if(y-x-2*k>2*(k+1)){
					x +=k;
					y -=k;
					k++;
				}
				else{
					if(y-x-2*k<=k+1){
						fnum = 2*k+1;
					}
					else
						fnum = 2*(k+1);
					break;
				}
			}
		}
		printf("%d\n", fnum);
	}
}