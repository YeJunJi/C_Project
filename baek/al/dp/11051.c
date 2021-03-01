#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int dp[1001][1001]={0};
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = (dp[i-1][j]+dp[i-1][j-1])%10007;
            }
        }
    }
    printf("%d\n", dp[n][k]);
}