#include <stdio.h>

int main(){
    int T, n;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        scanf("%d", &n);
        int sticker[2][n];
        for(int j=0;j<2;j++){
            for(int k=0;k<n;k++){
                scanf("%d", &sticker[j][k]);
            }
        }
        int max;
        sticker[0][1] += sticker[1][0];
        sticker[1][1] += sticker[0][0];
        if(sticker[0][1]>sticker[1][1]){
            max = sticker[0][1];
        }
        else{
            max = sticker[1][1];
        }
        for(int j=2;j<n;j++){
            for(int k=0;k<2;k++){
                int tmp = sticker[k][j-2];
                if(k==0){
                    if(sticker[k+1][j-1]>tmp){
                        tmp = sticker[k+1][j-1];
                    }
                    if(sticker[k+1][j-2]>tmp){
                        tmp = sticker[k+1][j-2];
                    }
                }
                else{
                    if(sticker[k-1][j-1]>tmp){
                        tmp = sticker[k-1][j-1];
                    }
                    if(sticker[k-1][j-2]>tmp){
                        tmp = sticker[k-1][j-2];
                    }
                }
                sticker[k][j]+=tmp;
                if(sticker[k][j]>max){
                    max = sticker[k][j];
                }
            }
        }
        printf("%d\n", max);
    }
}