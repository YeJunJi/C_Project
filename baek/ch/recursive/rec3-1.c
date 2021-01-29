#include <stdio.h>

char a[6561][6561];

void blank(int i, int j, int n){
    if(n==1){
        a[i][j] = '*';
        return;
    }
    for(int p=0;p<3;p++){
        for(int q=0;q<3;q++){
            if(p==1&&q==1){
                continue;
            }
            blank(i+n/3*p, j+n/3*q, n/3);
        }
    }
    return;
}



int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = ' ';
        }
    }
    blank(0, 0, n);
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        }
    }
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    

}