#include <stdio.h>

int main(){
    int a,b, array[1000000];
    scanf("%d %d", &a, &b);

    for(int i=0;i<1000000;i++){
        array[i] = i;
    }
    array[1] = 0;
    for(int i=0; i<=b;i++){
        if(array[i]==0){
            continue;
        }
        else{
            if(a<=i){
                printf("%d\n", i);
            }
            array[i]=0;
            for(int j=1;j*i<=b;j++){
                array[i*j] = 0;
            }
        }
    }
    
}