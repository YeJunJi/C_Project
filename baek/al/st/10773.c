#include <stdio.h>

int main(){
    int k, sum=0;
    scanf("%d", &k);
    int stack[k];
    for(int i=0;i<k;i++){
        stack[i] = 0;
    }
    for(int i=0;i<k;i++){
        scanf("%d", &stack[i]);
        if(stack[i]==0){
            int j=i-1;
            while(1){
                if(stack[j]!=0){
                    stack[j]=0;
                    break;
                }
                else{
                    j--;
                }
            }
        }
    }
    for(int i=0;i<k;i++){
        sum+=stack[i];
    }
    printf("%d", sum);
}