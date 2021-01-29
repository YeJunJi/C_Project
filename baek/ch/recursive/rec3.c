#include <stdio.h>

void makeStar(int i, int j, int k)
{
    if(((i/k)%3==1) && ((j/k)%3==1)){
        printf(" ");
    }
    else{
        if(k/3==0){
            printf("*");
        }
        else{
            makeStar(i, j, k/3);
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            makeStar(i, j, n);
        }
        printf("\n");
    }
}