#include <stdio.h>

int main(){
    int n, graph[1002]={0}, max=0, cnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d", &tmp);
        scanf("%d", &graph[tmp]);
        if(graph[tmp]>graph[max]){
            max = tmp;
        }
    }
    for(int i=0;i<max;i++){
        if(graph[i]==0){
            continue;
        }
        else{
            if(graph[i+1]<graph[i]){
                graph[i+1] = graph[i];
            }
        }
    }
    for(int i=1000;i>max;i--){
        if(graph[i]==0){
            continue;
        }
        else{
            if(graph[i-1]<graph[i]){
                graph[i-1] = graph[i];
            }
        }
    }
    for(int j=0;j<1001;j++){
        cnt+=graph[j];
    }
    printf("%d\n", cnt);
}