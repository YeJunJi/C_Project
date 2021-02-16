#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int info[n][2], dp[n];

    for(int i=0;i<n;i++){
        scanf("%d %d", &info[i][0], &info[i][1]);
        dp[i] = 0;
    }

    for(int i=0;i<n;i++){
        //시간이 흐르고 나서 그쪽 값이 더 커질때 최댓값을 바꿔주고 전체 최댓값을 재설정한다.
        if(info[i][1]>info[i+info[i][0]]){
            info[i+info[i][0]][1] +=info[i][1];
        }
    }

}