#include <stdio.h>
 //다시 볼 필요 있음  https://baejji-codingbox.tistory.com/entry/1915
int min(int a, int b, int c) {
    if(b<a){
        a = b;
    }
    if(c<a){
        a = c;
    }
    return a;
}
 
int main() {
    int n, m, max=0, dp[1001][1001]={0};
    scanf("%d%d", &n, &m);
    
    char c[1001];
    for(int i=1; i<=n; i++) {
        scanf("%s", c);
        for(int j=1; j<=m; j++) {
            if(c[j-1] == '1') {
                dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1;
                if(max<dp[i][j]){
                    max = dp[i][j];
                }
            }
        }
    }
 
    printf("%d", max*max);
 
    return 0;
}