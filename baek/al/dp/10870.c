#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int dp[n];
    dp[0]=0; dp[1]=1;
    
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    printf("%d", dp[n]);
}