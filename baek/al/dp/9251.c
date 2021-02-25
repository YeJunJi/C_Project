#include <stdio.h>
#include <string.h>
//LCS대표 문제 복습 필요
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    char input1[1001]={0}, input2[1001]={0};
    scanf("%s", input1);
    scanf("%s", input2);
    int dp[1001][1001]={0}, m=0;
    int len1 = strlen(input1);
    int len2 = strlen(input2);
    for (int i = 1; i < len2+1; i++)
    {
        for (int j = 1; j < len1+1; j++)
        {
            if(input2[i-1]==input1[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
            if(m<dp[i][j]){
                m=dp[i][j];
            }
        }
        
    }
    printf("%d\n", m);
}