#include <stdio.h>

int main(){
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int p=0;
        char input[100001] = {0}, st[100001]={0};
        scanf("%s", input);
        for(int j=0;j<100001;j++){
            if(input[j]==0){
                if(p==0){
                    cnt++;
                }
                break;
            }
            if(p==0||st[p-1]!=input[j]){
                st[p++] = input[j];
            }
            else{
                st[--p] = 0;
            }
        }
    }
    printf("%d\n", cnt);

}