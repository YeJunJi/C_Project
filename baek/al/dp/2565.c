#include <stdio.h>

int N;
int M = 0;
int L[100][3]; // [0] = S, [1] = D, [2] = LIS

int main() {
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        scanf("%d %d", &L[i][0], &L[i][1]);
    }
    
    // L 기준으로 오름차순 정렬.
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(L[i][0]>L[j][0]){
                int x, y;
                x = L[i][0]; y = L[i][1];
                L[i][0] = L[j][0]; L[i][1] = L[j][1];
                L[j][0] = x; L[j][1] = y;                
            }
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++) {
            if(L[i][1] > L[j][1] && L[i][2] <= L[j][2])
                L[i][2] = L[j][2] + 1;
        }
        if(M < L[i][2])
            M = L[i][2];
    }
    
    printf("%d\n", N - (M + 1));
    
}