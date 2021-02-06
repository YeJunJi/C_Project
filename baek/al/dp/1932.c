#include <stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n, ans=0;
    scanf("%d", &n);

    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            array[i][j] = -1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            scanf("%d", &array[i][j]);
        }
    }
    array[1][0] +=array[0][0]; array[1][1] += array[0][0];
    for(int i=1;i<n-1;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                array[i+1][j]+=array[i][j];
            }
            if(j==i){
                array[i+1][j+1]+=array[i][j];
                break;
            }
            if(array[i][j+1]!=-1){
                array[i+1][j+1]+=max(array[i][j], array[i][j+1]);
            }
            else{
                array[i+1][j+1]+=array[i][j];
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(ans<array[n-1][i]){
            ans = array[n-1][i];
        }
    }
    printf("%d", ans);
}