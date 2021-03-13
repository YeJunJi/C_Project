#include <stdio.h>
#include <stdlib.h>
int chain[1001][100001]={0};
typedef struct q{
    int data;
    struct q *next;
} que;

int main(){
    int T, n, k , D;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        //chain은 앞에 인덱스 -> 뒤에 인덱스
        int time[1001]={0}, idx[1001]={0}, pre[1001][2]={0};
        scanf("%d %d", &n, &k);
        for(int j=1;j<=n;j++){
            scanf("%d", &time[j]);
        }
        for(int j=0;j<k;j++){
            int x, y;
            scanf("%d %d", &x, &y);
            chain[x][idx[x]++] = y;
            pre[y][0]++;
        }
        que *cur = malloc(sizeof(que));
        que *first = cur;
        cur->data = 0;
        for(int j=1;j<=k;j++){
            if(pre[j]==0){
                que *new = malloc(sizeof(que));
                new->data = j;
                cur->next = new;
                cur = new;
            }
        }
        que *new = malloc(sizeof(que));
        new->data =0;
        cur->next = new;
        cur = new;
        que *last = cur;
        scanf("%d", &D);
        while(pre[D][0]>0){
            cur = first->next;
            while(cur->data != 0){
                if(pre[D][0]==0){
                    time[D] +=pre[D][1];
                }
                time[cur->data]+=pre[cur->data][1];
                for(int j=0;j<idx[cur->data];j++){
                    if(pre[chain[cur->data][j]][1]<time[cur->data]){
                        pre[chain[cur->data][j]][1] = time[cur->data];
                    }
                    pre[chain[cur->data][j]][0]--;
                }
            }
        }
        printf("%d\n", time[D]);
    }
}