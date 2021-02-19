#include <stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

long long int factorial(int n, int r){
    if(n==0||n<r){
        return 1;
    }
    if(n==r){
        return n;
    }
    return n*factorial(n-1, r);
}


int main(){
    long long int n, m, T;
    scanf("%lld", &T);
    for(long long int i=0;i<T;i++){
        scanf("%lld %lld", &n, &m);
        int htmp = max(n, m), ltmp;
        if(htmp==n){
            ltmp = m;
        }
        else{
            ltmp = n;
        }
        if(htmp-ltmp<(htmp+1)/2){
            ltmp = htmp-ltmp;
        }
        printf("%lld\n",factorial(htmp, htmp-ltmp+1)/factorial(ltmp, 1));
    }

}