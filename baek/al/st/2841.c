#include <stdio.h>


int main(){
    int n, P, cnt=0;
    scanf("%d %d", &n, &P);
    int input[6][300001]={0}, topIndex[6];
    for(int i=0;i<6;i++){
        topIndex[i] = -1;
    }
    for(int i=0;i<n;i++){
        int tmp, p;
        scanf("%d %d", &tmp, &p);
        if(topIndex[tmp-1]==-1){
            topIndex[tmp-1]++;
            input[tmp-1][topIndex[tmp-1]] = p;
            cnt++;
        }
        else if(input[tmp-1][topIndex[tmp-1]]<p){
            topIndex[tmp-1]++;
            input[tmp-1][topIndex[tmp-1]] = p;
            cnt++;
        }
        else if(input[tmp-1][topIndex[tmp-1]]>p){
            while(input[tmp-1][topIndex[tmp-1]]>p){
                topIndex[tmp-1]--;
                cnt++;
            }
            if(input[tmp-1][topIndex[tmp-1]]<p){
                topIndex[tmp-1]++;
                input[tmp-1][topIndex[tmp-1]] = p;
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}