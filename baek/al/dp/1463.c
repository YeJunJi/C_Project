#include <stdio.h>

int min(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int n;
    int a[1000001];
    scanf("%d",&n);
    a[1] = 0;
    for(int i=2;i<=n;i++){
        a[i] = a[i-1]+1;
        if(i%3==0){
            a[i] = min(a[i], a[i/3]+1);
        }
        if(i%2==0){
            a[i] = min(a[i], a[i/2]+1);
        }
    }

    printf("%d", a[n]);
}