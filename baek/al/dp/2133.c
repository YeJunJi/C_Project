#include <stdio.h>

int main(){
    unsigned long long int n, dp[31]={0};
    scanf("%lld", &n);
    dp[0]=1; dp[1]=2;dp[2]=3;
    for(int i=3;i<=n;i++){
        if(i%2==0){
            dp[i] = dp[i-2]+dp[i-1];
        }else{
            dp[i] = dp[i-1]*2+dp[i-2];
        }
    }
    if(n%2==0){
        printf("%lld\n", dp[n]);
    }
    else{
        printf("0\n");
    }
}