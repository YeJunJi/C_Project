#include <stdio.h>

unsigned int fac(unsigned int n){
    if(n==1||n==0){
        return 1;
    }
    return n*fac(n-1);
}


int main(){
    unsigned int n, sum=0;
    scanf("%d", &n);
    int vertical = n;
    int horizon = 0;
    for(;vertical>=0;vertical-=2, horizon++){
        if(vertical==0||horizon==0){
            sum++;
        }
        else{
            sum += fac(vertical+horizon)/(fac(vertical)*fac(horizon));
        }
        printf("currnet sum : %d\n", sum);
    }
    printf("final : %d", sum%10007);
}