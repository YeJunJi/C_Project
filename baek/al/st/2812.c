#include <stdio.h>

int main(){
    int n, k, p=0;
    scanf("%d %d", &n, &k);
    char input[500001]={0}, st[500001]={0};
    int tmp = k;
    scanf("%s", input);
    for(int i=0;i<n;i++){
        if(p==0||st[p-1]>=input[i]){
            st[p++] = input[i];
        }
        else if(st[p-1]<input[i]){
            while(k>0){
                if(st[p-1]==0||st[p-1]>=input[i]){
                    break;
                }
                else if(st[p-1]<input[i]){
                    st[--p] = 0;
                    k--;
                }
            }
            st[p++] = input[i];
        }
    }
    for(int i=0;i<n-tmp;i++){
        printf("%c", st[i]);
    }
}