#include <stdio.h>

int main(){
    int n, p=0, input[80001][2]={0}, st[80001]={0};
    long long sum=0;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d", &input[i][0]);
        input[i][1] = 0;
    }
    for(int i=0;i<n;i++){
        if(p==0||input[st[p-1]][0]>input[i][0]){
            st[p++] = i;
        }
        else{
            while(input[st[p-1]][0]<=input[i][0]&&p!=0){
                st[--p] = 0;
            }
            st[p++] = i;
        }
        sum+=p-1;
    }
    printf("%lld\n", sum);
}