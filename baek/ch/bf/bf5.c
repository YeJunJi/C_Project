#include <stdio.h>

int main(){
    int n; int cnt = 0;
    scanf("%d", &n);
    int result[10000];

    for(unsigned int i=666;i<=4,294,967,295;i++){
        int tmp = i;int prev = 0; int pprev = 0; int cur = 0;
        if (cnt == n+1)
        {
            break;
        }
        
        while (tmp>0)
        {
            cur = tmp%10;
            if (cur == 6 && prev == 6 && pprev==6){
                result[cnt++] = i;
                break;
            }
            pprev = prev;
            prev = cur;
            tmp/=10;
        }
        
    }
    printf("%d", result[n-1]);
    
}