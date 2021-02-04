#include <stdio.h>

int min(int a[][3], int i, int j){
    int min = 0;
    for(int k=0;k<3;k++){
        if(k!=j){
            if(min==0||a[i][k]<min){
                min = a[i][k];
            }
        }
    }
    return min;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n][3];
    int ans[n][3];
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(i==0){
                ans[i][j] = arr[i][j];
            }
            else{
                ans[i][j] = min(ans,i-1, j)+arr[i][j];
            }
        } 
    }
    printf("%d", min(ans,n-1, 4));
}