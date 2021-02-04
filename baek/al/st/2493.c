#include <stdio.h>

typedef struct{
    //답을 가져오는 인덱스
    int index;
    //스택에 쌓여있는 수
    int value;
}stack;

int main(){
    int n;
    scanf("%d", &n);
    int input[n], k=0;
    stack st[n];
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(k!=0 && st[k-1].value<input[i]){
            while(k>0){
                if(st[k-1].value<input[i]){
                    input[st[--k].index] = i+1;
                }
                else{
                    break;
                }
            }
        }
        st[k].index=i;
        st[k++].value = input[i];
    
    }
    for(int i=0;i<k;i++){
        input[st[i].index] = 0;
    }
    for(int i=0;i<n;i++){
        printf("%d ", input[i]);
    }
}