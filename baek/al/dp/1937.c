#include <stdio.h>

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int dfs(int n, int input[500][500], int dp[500][500][2], int x, int y){
    int tmp=0;
    if(dp[x][y][1]){
        return dp[x][y][0];
    }
    else{
        if(0<=x+1 && x+1<=n-1 && input[x+1][y] > input[x][y]){
            tmp = maximum(dfs(n, input, dp, x+1, y), tmp);
        }
        if(0<=x-1 && x-1<=n-1 && input[x-1][y] > input[x][y]){
            tmp = maximum(dfs(n, input, dp, x-1, y), tmp);
        }
        if(0<=y+1 && y+1<=n-1 && input[x][y+1] > input[x][y]){
            tmp = maximum(dfs(n, input, dp, x, y+1), tmp);
        }
        if(0<=y-1 && y-1<=n-1 && input[x][y-1] > input[x][y]){
            tmp = maximum(dfs(n, input, dp, x, y-1), tmp);
        }
    }
    dp[x][y][0] += tmp;
    dp[x][y][1] = 1;
    return dp[x][y][0];
}

int main(){
    int n, max = 0;
    scanf("%d", &n);
    int input[500][500]={0}, dp[500][500][2]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &input[i][j]);
            dp[i][j][0] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            max = maximum(dfs(n, input, dp, i, j), max);
        }
    }
    printf("%d\n", max);
}