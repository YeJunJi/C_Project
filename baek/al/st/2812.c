#include <stdio.h>

int main(){
    int n, k, input, p=0;
    scanf("%d %d", &n, &k);
    scanf("%d", &input);
    int tmp = k;
    int stack[500000], inputnum[500000];
    for(int i=n-1;i>=0;i--){
        inputnum[i] = input%10;
        input/=10;
        stack[i] = -1;
    }
    for(int i=0;i<n;i++){
        if(p==0){
            stack[p++]=inputnum[i];
        }
        else if(stack[p-1]<inputnum[i]){
            if(k==0){
                stack[p++]=inputnum[i];
            }else{
                while(stack[p-1]<inputnum[i]){
                    if(k==0||p==0){
                        break;
                    }
                    stack[--p]=-1;
                    k--;
                }
                stack[p++] = inputnum[i];
            }
        }
        else{
            stack[p++]=inputnum[i];
        }
    }
    for(int j=0;j<n-tmp;j++){
        printf("%d", stack[j]);
    }
}