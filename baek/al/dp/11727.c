#include <stdio.h>

int main(){
    int n, dp[1001]={0};
    scanf("%d", &n);
    dp[0]=1; dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = (2*dp[i-2]+dp[i-1])%10007;
    }
    printf("%d\n", dp[n]);
}