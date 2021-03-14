#include <stdio.h>

int main(){
    int n, input[101]={0}, dp[101]={0}, max=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d", &tmp);
        scanf("%d", &input[tmp]);

    }
    for(int i=1;i<=101;i++){
        if(input[i]!=0){
            dp[i]=1;
        }
        for(int j=input[i];j<=101;j++){
            if(input[j]>input[i])
        }
    }
}