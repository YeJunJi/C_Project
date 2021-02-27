#include <stdio.h>

typedef struct{
    int data;
    int up;
    int down;
}sequence;

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n, max=0;
    scanf("%d", &n);
    sequence s[n];
    for(int i=0;i<n;i++){
        scanf("%d", &s[i].data);
        s[i].up=1; s[i].down=1;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=i;j--){
            if(s[j].data<s[i].data){
                if(s[j].down>=s[i].down){
                    s[i].down = s[j].down+1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(s[j].data<s[i].data){
                if(s[j].up>=s[i].up){
                    s[i].up = s[j].up+1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        max = maximum(max, s[i].up+s[i].down-1);
    }
    printf("%d\n", max);
}