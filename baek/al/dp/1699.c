#include <stdio.h>

int minimum(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}


int main(){
    int n, dp[100001]={0};
    scanf("%d", &n);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = i;
        for(int j=1;j*j<=i;j++){
            dp[i] = minimum(dp[i], dp[i-j*j]+1);
        }
    }
    printf("%d", dp[n]);
}