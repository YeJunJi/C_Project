#include <stdio.h>
//10844 참고
int main(){
    int n, dp[1000][10]={0}, sum=0;
    scanf("%d", &n);
    for(int i=0;i<10;i++){
        dp[0][i] = 1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<=j;k++){
                dp[i][j] += dp[i-1][k]%10007;
            }
        }
    }
    for(int i=0;i<10;i++){
        sum+=dp[n-1][i];
    }
    printf("%d", sum%10007);
}