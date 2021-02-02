#include <stdio.h>



int main(){
    int n, T;
    scanf("%d", &n);
    int ans[41][2]={0};
    for(int i=0;i<n;i++){
        scanf("%d", &T);
        ans[0][0]=1;
        ans[0][1]=0;
        ans[1][1]=1;
        ans[1][0]=0;
        for(int j=2;j<=T;j++){
            if(ans[j][0]==0){
                ans[j][0] = ans[j-1][0] + ans[j-2][0];
                ans[j][1] = ans[j-1][1] + ans[j-2][1];
            }
        }
        printf("%d %d\n", ans[T][0], ans[T][1]);
    }
}