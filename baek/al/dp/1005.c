#include <stdio.h>

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int dfs(int input[1001][1001], int idx[], int D){
    int max=0;
    if(idx[D]==0){
        return input[D][0];
    }
    for(int i=1;i<=idx[D];i++){
        max = maximum(max, dfs(input, idx, input[D][i])+input[D][0]);
    }
    return max;
}


int main(){
    //input의 0번째 인덱스에는 시간이 뒤부터 조건인숫자가 들어가있다
    int T, n, k;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        int input[1001][1001]={0}, idx[1001]={0}, D;
        scanf("%d %d", &n, &k);
        for(int j=1;j<=n;j++){
            scanf("%d", &input[j][0]);
        }
        int tmp1, tmp2;
        for(int j=1;j<=k;j++){
            scanf("%d %d", &tmp1, &tmp2);
            input[tmp2][++idx[tmp2]] = tmp1;
        }
        scanf("%d", &D);
        printf("%d\n", dfs(input, idx, D));
    }
}