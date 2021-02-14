#include <stdio.h>

int main(){
    int array[246912]={0};
    for(int i=0;i<=246912;i++){
        array[i] = i;
    }
    while(1){
        int n, cnt=0;
        scanf("%d", &n);
        if(n==0){
            break;
        }
        array[1] = 0;
        for(int i=0; i<=2*n;i++){
            if(array[i]==0){
                continue;
            }
            else{
                if(n<i){
                    cnt++;
                }
                for(int j=2;j*i<=2*n;j++){
                    array[i*j] = 0;
                }
            }
        }
        printf("%d\n",cnt);
    }
    
}