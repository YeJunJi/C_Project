#include <stdio.h>

int main(){
    int n, p=0, input[1001]={0}, st[1001]={0}, res=1;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    for(int i=0;i<=n;i++){
        while(1){
            if(st[p-1]==res && p!=0){
                res++;
                st[--p]=0;
            }
            else{
                break;
            }
        }
        if(i==n){
            break;
        }
        if(input[i]==res){
            res++;
        }
        else{
            st[p++] = input[i];
        }
    }
    if(p==0){
        printf("Nice");
    }
    else{
        printf("Sad");
    }
}