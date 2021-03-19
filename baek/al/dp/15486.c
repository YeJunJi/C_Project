#include <stdio.h>

int a[1500001][2]={0};
int dp[1500001]={0};

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n, max=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    dp[0]=0;
    for(int i=0;i<=1500000;i++){
        max = maximum(max, dp[i]);
        if (i+a[i][0]<=n){
            dp[i+a[i][0]] = maximum(dp[i+a[i][0]], max+a[i][1]);
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", dp[i]);
    }
    printf("%d\n", max);
}