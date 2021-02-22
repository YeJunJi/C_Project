#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int dp[10001]={0}, coin[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d", &coin[i]);
    }
    dp[0] = 1;
    for(int i=0;i<n;i++){
        for(int j=coin[i];j<k+1;j++){
            dp[j] += dp[j-coin[i]];
        }
    }
    printf("%d", dp[k]);
}