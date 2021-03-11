#include <stdio.h>


int main(){
    int n, dp[100001][3]={0};
    scanf("%d", &n);
    dp[0][0] = 1; dp[0][1] = 1; dp[0][2] = 1;
    for(int i=1;i<n;i++){
        dp[i][0] = (dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%9901;
        dp[i][1] = (dp[i-1][0]+dp[i-1][2])%9901;
        dp[i][2] = (dp[i-1][0]+dp[i-1][1])%9901;
    }
    printf("%d\n", (dp[n-1][0]+dp[n-1][1]+dp[n-1][2])%9901);

}