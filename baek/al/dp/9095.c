#include <stdio.h>

int factorial(int n){
    if(n==0){return 1;}
    return n*factorial(n-1);
}


int add(int one, int two, int three){
    int sum = one+two+three;
    return factorial(sum)/(factorial(one)*factorial(two)*factorial(three));
}


int main(){
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        int n, one=0, two=0, three=0, cnt=0;
        scanf("%d",&n);
        three = n/3;
        for(;three>=0;three--){
            for(int j=0;j<=n-three*3;j++){
                for(int k=0;k<=n-three*3;k++){
                    if(j*2+k==n-three*3){
                        cnt+=add(k, j, three);
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
}