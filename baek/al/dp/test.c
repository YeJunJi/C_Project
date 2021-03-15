#include <stdio.h>
//dfs를 이용한 풀이 하지만 완전탐색의 경우 시간초과

int dfs(int input[1001][1001], int idx[], int D, int check[]){
    int max=0;
    if(idx[D]==0){
        return input[D][0];
    }
    else if(check[D]>0){
        return check[D];
    }
    for(int i=1;i<=idx[D];i++){
        int tmp = dfs(input, idx, input[D][i], check)+input[D][0];
        if(tmp>max){
            max = tmp;
            check[D] = tmp;
        }
    }
    return check[D];
}


int main(){
    //input의 0번째 인덱스에는 시간이 뒤부터 조건인숫자가 들어가있다
    int T, n, k;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        int input[1001][1001]={0}, idx[1001]={0}, D, check[1001]={0};
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
        printf("%d\n", dfs(input, idx, D, check));
        for(int j=1;j<=n;j++){
            printf("%d ", check[j]);
        }
        printf("\n");
    }
}