#include <stdio.h>

typedef struct {
    int one;
    int two;
} dp1;

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n, stair[10001]={0}, maximum = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &stair[i]);
    }
    
    dp1 dp[n];
    dp[0].one=stair[0]; dp[0].two=0;
    int tmp = max(dp[0].one,dp[1].two);
    if(maximum<tmp){
        maximum = tmp;
    }
    if(n!=1){
        dp[1].one = stair[1]; dp[1].two = dp[0].one+stair[1];
        int tmp = max(dp[1].one,dp[1].two);
        if(maximum<tmp){
            maximum = tmp;
        }
    }
    for(int i=2;i<n;i++){
        dp[i].one = max(dp[i-2].one, dp[i-2].two)+stair[i];
        dp[i].two = dp[i-1].one+stair[i];
        int tmp = max(dp[i].one,dp[i].two);
        if(maximum<tmp){
            maximum = tmp;
        }
    }
    printf("%d\n", maximum);
}