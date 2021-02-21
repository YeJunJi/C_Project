#include <stdio.h>

int main(){
    int n, input[1000001]={0}, st[1000001][2]=0, p=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    int min = input[0]; int max = input[0]*input[0], st[0]=0;
    for(int i=1;i<n;i++){
        if(min<=input[i]){
            int tmp=0;
            for(int j=st[p];j<=i;j++){
                tmp+=input[j];
            }
            tmp*=min;
        }
        else{
            min = input[i];
            //바뀐 min값에 의해 max가 바뀌는지 확인하는 부분
            int tmp = 0;
            for(int j=st[p];j<=i;j++){
                tmp += input[j];
            }
            tmp*=min;
            if(max<tmp){
                max = tmp;
            }
        }
    }
}