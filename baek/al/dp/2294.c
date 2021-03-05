#include <stdio.h>

int main(){
    int n, k, input[100]={0}, dp[10001]={0};
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    for(int i=1;i<=k;i++){
        dp[i] = 10001;
    }
    for(int i=0;i<n;i++){
        for(int j=input[i];j<=k;j++){
            if(dp[j]>dp[j-input[i]]+1){
                dp[j] = dp[j-input[i]]+1;
            }
        }
    }
    if(dp[k]==10001){
        printf("-1\n");
    }
    else{
        printf("%d\n", dp[k]);
    }
}