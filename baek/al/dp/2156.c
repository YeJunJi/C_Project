#include <stdio.h>

typedef struct{
    int one;
    int two;
} drink;

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int search(int i, drink dp[]){
    int max=0;
    while(i-2>=0){
        int tmp = maximum(dp[i-2].one, dp[i-2].two);
        max = maximum(tmp, max);
        i--;
    }
    return max;
}

int main(){
    int n, start=0, max=0;
    scanf("%d", &n);
    int input[n];
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    drink dp[n];
    for(int i=0;i<n;i++){
        if(input[i]!=0){
            start = i;
            break;
        }
    }

    dp[start].one = input[start]; dp[start].two = 0;
    dp[start+1].one = input[start+1]; dp[start+1].two = dp[start].one+input[start+1];
    if(n-start==1){
        max = maximum(dp[start].one, dp[start].two);
    }
    else{
        max = maximum(dp[start].one, dp[start].two);
        int tmp = maximum(dp[start+1].one, dp[start+1].two);
        max = maximum(max, tmp);
    }
    for(int i=start+2;i<n;i++){
        dp[i].one = search(i, dp)+input[i];
        dp[i].two = dp[i-1].one+input[i];

        int tmp = maximum(dp[i].one, dp[i].two);
        max = maximum(tmp, max);
    }
    printf("%d", max);
}