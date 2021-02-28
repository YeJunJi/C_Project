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
    int n;
    scanf("%d" , &n);
    int input[1001][2]={0};
    for(int i=0;i<n;i++){
        scanf("%d", &input[i][0]);
        input[i][1] = input[i][0];
    }
    input[0][1] = input[0][0];
    int max = input[0][1];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(input[i][0]>input[j][0]){
                if(input[i][1]<=input[j][1]+input[i][0]){
                    input[i][1] = input[j][1]+input[i][0];
                }
            }
        }
        max = maximum(max, input[i][1]);
    }
    printf("%d\n", max);
}