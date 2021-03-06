#include <stdio.h>
//복습할 필요가 있다고 생각함
int dp[101][100001]={0};

typedef struct{
    int w;
    int v;
} bag;

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n, k, max=0;
    scanf("%d %d", &n, &k);
    bag a[n];
    for(int i=0;i<n;i++){
        scanf("%d %d", &a[i].w, &a[i].v);
    }
    for(int i=1;i<=n;i++){
        for(int j=0 ;j<=k ;j++){
            dp[i][j] = dp[i-1][j];
            if(j-a[i-1].w >= 0){
                dp[i][j] = maximum(dp[i][j], dp[i - 1][j - a[i-1].w] + a[i-1].v);
            }
        }
    }

    printf("%d\n", dp[n][k]);
}