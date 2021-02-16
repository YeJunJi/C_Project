#include <stdio.h>
#include <stdlib.h>


int main(){
    int T, n, prime[10001]={0}, isprime[10001]={0}, p=0, res[2]={0};
    for(int i=0;i<10001;i++){
        prime[i] = i;
    }
    for(int i=2;i<10001;i++){
        if(prime[i]!=0){
            for(int j=2;i*j<10001;j++){
                prime[i*j]=0;
            }
        }
    }
    prime[1] = 0;
    for(int i=0;i<100;i++){
        printf("%d\n", prime[i]);
    }
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        scanf("%d", &n);
        //에라토스테네스의 체로 소수 검열
        for(int j=0;j<=n/2;j++){
            for(int k=j;k<n;k++){
                if(prime[j]+prime[k]==n){
                    res[0] = prime[j]; res[1] = prime[k];
                }
            }
        }
        printf("%d %d\n", res[0], res[1]);
    }
}