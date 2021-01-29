#include <stdio.h>

typedef struct
{
    int w;
    int b;
} countChange;
int count();

int main(){
    int width; int height;
    scanf("%d %d", &height, &width);
    char board[50][50] = {0};
    int n = (height-8+1)*(width-8+1);
    countChange result[n];
    int k = 0;
    for(int i=0;i<height;i++){
        for (int j = 0; j < width; j++)
        {
            scanf(" %c", &board[i][j]);
        }
    }

    for (int i = 0; i <= height-8; i++)
    {
        for (int j = 0; j <= width-8; j++)
        {
            count(board, i, j, k, result);
            k++;
        }

    }
    int minimun = 64;
    for (int i = 0; i < n; i++)
    {
        if (result[i].w<minimun){
            minimun = result[i].w;
        }
        if (result[i].b<minimun){
            minimun = result[i].b;
        }
    }
    printf("%d", minimun);
}

int count(char board[50][50], int i, int j, int a, countChange b[]){
    b[a].w = 0; b[a].b = 0;
    for (int p = i; p < i+8; p++)
    {
        for (int q = j; q < j+8; q++)
        {
            if (p%2==0)
            {
                if (q%2==0)
                {
                    if (board[p][q]=='B')
                    {
                        b[a].w++;
                    }
                    else
                    {
                        b[a].b++;
                    }
                    
                }
                else
                {
                    if (board[p][q]=='W')
                    {
                        b[a].w++;
                    }
                    else
                    {
                        b[a].b++;
                    }
                       
                }      
                        
            }
            else
            {
                if (q%2==0)
                {
                    if (board[p][q]=='W')
                    {
                        b[a].w++;
                    }
                    else
                    {
                        b[a].b++;
                    }
                    
                }
                else
                {
                    if (board[p][q]=='B')
                    {
                        b[a].w++;
                    }
                    else
                    {
                        b[a].b++;
                    }
                       
                }
            }
            
        }

    }
}