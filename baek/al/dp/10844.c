#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long cnt=0, array[n][10];
    array[0][0]=0;
    for(int i=1;i<10;i++){
        array[0][i] = 1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<10;j++){
            if(j==0){
                array[i][j] = (array[i-1][j+1]);
            }
            else if(j==9){
                array[i][j] = (array[i-1][j-1]);
            }
            else{
                array[i][j] = (array[i-1][j-1]+array[i-1][j+1])%1000000000;
            }
        }
    }
    
    for(int i=0;i<10;i++){
        cnt+=(array[n-1][i]);
    }


    printf("%lld\n", cnt%1000000000);
}