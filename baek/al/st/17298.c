#include <stdio.h>

typedef struct{
    int value;
    int index;
} stack;


int main(){
    int n, p=0, input[1000001]={0};
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d", &input[i]);
    }

    stack st[n];

    for(int i=0; i<n; i++){
        if(i==0 || st[p-1].value>=input[i]){
            st[p].index = i;
            st[p++].value = input[i];
        }
        else{
            while(st[p-1].value<input[i]){
                if(p==0){
                    break;
                }
                input[st[--p].index] = input[i];
            }
            st[p].index = i;
            st[p++].value = input[i];
        }
    }
    if(p>0){
        while(p>0){
            input[st[--p].index] = -1;
        }
    }
    input[n-1] = -1;

    for(int i=0;i<n;i++){
        printf("%d ", input[i]);
    }
    
}