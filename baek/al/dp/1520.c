#include <stdio.h>
 
//기본적으로 m,n까지 갔다가 돌아오는 길에 수를 더해주는 식으로 코드를 구성
//복습필요

int n, m;
int map[500][500];
int d[500][500];
//상하좌우 백터 생성
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
 
 //dfs를 구성하는 벡터
int dfs(int x,int y) {
    if (x == 0 && y == 0) {
        return 1;
    }
    if (d[x][y] == -1) {
        d[x][y] = 0;
        for (int i = 0; i < 4; i++) {
            int ax = x + dx[i];
            int ay = y + dy[i];
            //현재 노드 기준으로 상하좌우를 하나씩 확인
            if (ax >= 0 && ay >= 0 && ax < n && ay < m) {
                //만약에 이동하려는 노드가 더 크다면 이동 
                if (map[x][y] < map[ax][ay]) {
                    d[x][y] += dfs(ax, ay);
                }
            }
        }
    }
    return d[x][y];
}
 
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
            d[i][j] = -1;
        }
    }
    
    printf("%d\n", dfs(n-1,m-1));
}
