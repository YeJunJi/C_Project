#include <stdio.h>

typedef struct{
    int index;
    int value;
} stack;

int main(){
    while(1){
        int n, max=0;
        scanf("%d", &n);
        stack st[n];
        int height[n], p=0;
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            scanf("%d", &height[i]);
        }
        for(int i=0;i<n;i++){
            if(p==0||st[p-1].value<height[i]){
                st[p].index = i;
                st[p++].value = height[i];
            }
            else if(st[p-1].value>height[i]){
            }
        }
    }
}