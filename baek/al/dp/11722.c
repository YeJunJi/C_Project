#include <stdio.h>

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n, seq[1001][2]={0}, max=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &seq[i][0]);
        seq[i][1] = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(seq[i][0]<seq[j][0]){
                if(seq[i][1]<=seq[j][1]){
                    seq[i][1] = seq[j][1]+1;
                }
            }
        }
        max = maximum(max, seq[i][1]);
    }
    printf("%d\n", max);
}