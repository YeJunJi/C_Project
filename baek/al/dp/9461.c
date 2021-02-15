#include <stdio.h>

int main(){
    long long int T, n, dp[101]={0};
    dp[0] = 1; dp[1] = 1; dp[2] = 1;
    dp[3] = 2; dp[4] = 2;
    scanf("%lld", &T);
    for(int i=0;i<T;i++){
        scanf("%lld", &n);
        for(int j=5;j<n;j++){
            if(dp[j]==0){
                dp[j] = dp[j-1]+dp[j-5];
            }
        }
        printf("%lld\n", dp[n-1]);
    }
}