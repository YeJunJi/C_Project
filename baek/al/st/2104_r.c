#include <stdio.h>

int main(){
    int n, input[1000001]={0}, st[1000001]={0}, p=0, max=0, min;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    for(int i=0;i<n;i++){
        if(p==0||st[p-1]<=input[i]){
            st[p++] = input[i];
        }
        else{
            if(max<st[p-1]*st[p-1]){
                max = st[p-1]*st[p-1];
            }
            int row=0;
            while(st[p-1]>input[i]||p!=0){
                row+=st[--p];
            }
            if(max<row*st[p]){
                max = row*st[p];
            }
            st[p++] = input[i];
        }
        printf("%d : %d\n", i, p);
    }
    /*
    if(p!=0){
        if(max<row*st[0]){
            max = row*st[0];
        }
    }
    */
    printf("%d\n", max);
}