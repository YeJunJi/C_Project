#include <stdio.h>

int main(){
    int n, ans[1001]={0};
    scanf("%d", &n);

    ans[0]=1;
    ans[1]=1;
    for(int i=2;i<=n;i++){
        ans[i] = (ans[i-1]+ans[i-2])%10007;
    }
    printf("%d", ans[n]);
}