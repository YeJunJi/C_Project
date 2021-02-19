#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int input[n], f[1000001]={0}, st[1000001]={0}, p=0;
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
        f[input[i]]++;
    }
    for(int i=0;i<n;i++){
        if(p==0||f[input[st[p-1]]]>=f[input[i]]){
            st[p++] = i;
        }
        else if(f[input[st[p-1]]]<f[input[i]]){
            while(1){
                if(f[input[st[p-1]]]>=f[input[i]]||p==0){
                    break;
                }
                input[st[--p]] = input[i];
            }
            st[p++] = i;
        }
    }
    while(p>0){
        input[st[--p]] = -1;
    }
    for(int i=0;i<n;i++){
        printf("%d ", input[i]);
    }
}