#include <stdio.h>

typedef struct{
    long long int one;
    long long int zero;
} num;

int main(){
    int n;
    scanf("%d", &n);
    num dp[n];
    dp[0].one=1; dp[0].zero=0;
    for(int i=1;i<n;i++){
        dp[i].one=0; dp[i].zero=0;
        dp[i].zero+=dp[i-1].one+dp[i-1].zero;
        dp[i].one+=dp[i-1].zero;
    }
    
    printf("%lld\n", dp[n-1].one+dp[n-1].zero);
}