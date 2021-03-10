#include <stdio.h>

int main(){
    unsigned long long int n, dp[100][100][2]={0};
    scanf("%lld", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%lld", &dp[i][j][0]);
        }
    }
    dp[0][0][1] = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dp[i][j][0]==0){
                break;
            }
            if(dp[i][j][1]!=0){
                if(j+dp[i][j][0]<n){
                    dp[i][j+dp[i][j][0]][1] += dp[i][j][1];
                }
                if(i+dp[i][j][0]<n){
                    dp[i+dp[i][j][0]][j][1] += dp[i][j][1];
                }
            }
        }
    }
    printf("%lld\n", dp[n-1][n-1][1]);
}