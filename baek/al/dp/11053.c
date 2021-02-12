#include <stdio.h>

int max(int a, int b){
    if(a>b){return a;}
    else return b;
}


int main(){
    int n, maximum=1;
    scanf("%d", &n);
    int input[n][2];
    for(int i=0;i<n;i++){
        scanf("%d", &input[i][0]);
    }
    input[0][1] = 1;
    for(int i=1;i<n;i++){
        input[i][1]=1;
        for(int j=0;j<i;j++){
            if(input[i][0]>input[j][0]){
                if(input[i][1]<=input[j][1]){
                    input[i][1] = input[j][1]+1;
                }
            }
        }
        if(input[i][1]>maximum){
            maximum = input[i][1];
        }
    }
    printf("%d\n", maximum);
}