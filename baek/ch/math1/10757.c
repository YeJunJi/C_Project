#include <stdio.h>
#include <string.h>

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    char a[10001]={0}, b[10001]={0}, ans[10002][2]={0};

    scanf("%s", a);
    scanf("%s", b);
    int a_len = strlen(a);
    int b_len = strlen(b);
    int max = maximum(a_len,b_len);
    if(max==b_len){
        for(int i=a_len-1, j=0;i>=0;i--, j++){
            ans[j][0] = a[i];
        }
        for(int i=b_len-1,j=0;i>=0;i--,j++){
            if(ans[j][0]+ans[j][1]+b[i]>=106){
                ans[j][0] = ans[j][0]+b[i]+ans[j][1]-58;
                if(ans[j+1][0]==0){
                    ans[j+1][0] = 49;
                }else{
                    ans[j+1][1] = 1;
                }
            }
            else{
                if(ans[j][0]==0){
                    ans[j][0] = b[i];
                }else{
                    ans[j][0] = ans[j][0]+ans[j][1]+b[i]-48;
                }
            }
            if(i==0&&ans[j+1][1]==1){
                ans[j+1][0]++;
            }
        }
    }
    else{
        for(int i=b_len-1, j=0;i>=0;i--, j++){
            ans[j][0] = b[i];
        }
        for(int i=a_len-1,j=0;i>=0;i--,j++){
            if(ans[j][0]+ans[j][1]+a[i]>=106){
                ans[j][0] = ans[j][0]+a[i]+ans[j][1]-58;
                if(ans[j+1][0]==0){
                    ans[j+1][0] = 49;
                }else{
                    ans[j+1][1] = 1;
                }
            }
            else{
                if(ans[j][0]==0){
                    ans[j][0] = a[i];
                }else{
                    ans[j][0] = ans[j][0]+ans[j][1]+a[i]-48;
                }
            }
            if(i==0&&ans[j+1][1]==1){
                ans[j+1][0]++;
            }
        }
    }

    for(int i=10001;i>=0;i--){
        if(ans[i][0]==0){
            continue;
        }
        else{
            printf("%c", ans[i][0]);
        }
    }
}