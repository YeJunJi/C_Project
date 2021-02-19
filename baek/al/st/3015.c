#include <stdio.h>

int main(){
    int n, st[500001]={0}, p=0, sum=0;
    scanf("%d", &n);
    int input[n][2];
    for(int i=0;i<n;i++){
        scanf("%d", &input[i][0]);
        input[i][1] = 0;
    }
    for(int i=0;i<n;i++){
        if(p==0){
            st[p++] = i;
        }
        else if(input[st[p-1]][0]<=input[i][0]){
            while(1){
                if(p==0){
                    break;
                }
                else if(input[st[p-1]][0]<input[i][0]){
                    sum+=(++input[st[--p]][1]);
                }
                else if(input[st[p-1]][0]>input[i][0]){
                    input[st[p-1]][1]++;
                    break;
                }
                else{
                    for(int j=0;j<p;j++){
                        input[st[j]][1]++;
                    }
                    break;
                }
            }
            st[p++] = i;
        }
        else if(input[st[p-1]][0]>input[i][0]){
            input[st[p-1]][1]++;
            st[p++] = i;
        }
    }
    for(int i=0;i<p;i++){
        sum+=input[st[i]][1];
    }
    printf("%d\n", sum);
}