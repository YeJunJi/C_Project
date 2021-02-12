#include <stdio.h>

int maximum(int a, int b){
    if(a>b){return a;}
    else{return b;}
}

int main(){
    int n, input[100001]={0}, dp[100001]={0};
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    dp[0] = input[0];
    int max = dp[0];
    for(int i=1;i<n;i++){
        if(dp[i-1]<0){
            dp[i]=input[i];
        }else{
            dp[i] = dp[i-1]+input[i];
        }
        max = maximum(max, dp[i]);
    }
    printf("%d\n", max);
}