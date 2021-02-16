#include <stdio.h>

int main(){
    int n, max=0;
    scanf("%d", &n);
    int info[n][2], dp[n];

    for(int i=0;i<n;i++){
        scanf("%d %d", &info[i][0], &info[i][1]);
        dp[i] = 0;
    }

    for(int i=0;i<n;i++){
        if(n-i<info[i][0]){
            continue;
        }
        int tmp=0;
        for(int j=0;j<i;j++){
            if(i-j>=info[j][0]){
                if(tmp<info[j][1]){
                    tmp=info[j][1];
                }
            }
        }
        info[i][1] += tmp;
        if(info[i][1]>max){
            max = info[i][1];
        }
        
    }
    printf("%d\n", max);
}