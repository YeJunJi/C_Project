#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int p[n], dp[n];
    for(int i=0;i<n;i++){
        scanf("%d", &p[i]);
    }
    dp[0] = p[0];
    for(int i=1;i<n;i++){
        dp[i] = p[i];
        for(int j=i-1;j>=i/2;j--){
            if(dp[i]<dp[j]+dp[i-j-1]){
                dp[i] = dp[j]+dp[i-j-1];
            }
        }
    }
    printf("%d", dp[n-1]);
}