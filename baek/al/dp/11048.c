#include <stdio.h>

int main(){
    int n, m, dp[1001][1001]={0};
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
        for(int j=1;j<=m;j++){
            scanf("%d", &dp[i][j]);
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1;j<=m;j++){
            if(dp[i-1][j]>dp[i][j-1]){
                dp[i][j]+=dp[i-1][j];
            }
            else{
                dp[i][j]+=dp[i][j-1];
            }
        }
    }
    printf("%d\n", dp[n][m]);
}