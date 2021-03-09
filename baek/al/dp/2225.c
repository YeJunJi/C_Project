#include <stdio.h>

int main(){
    int n, k, dp[201]={0};
    scanf("%d %d", &n, &k);
    dp[0] = 1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[j] = (dp[j-1] + dp[j])%1000000000;
        }
    }
    printf("%d\n", dp[k-1]);
}