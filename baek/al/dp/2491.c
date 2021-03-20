#include <stdio.h>

int main(){
    int n, dpinc[100000]={0}, dpdec[100000]={0}, input[100000]={0}, max=1;
    scanf("%d", &n);
    dpinc[0]=1;dpdec[0]=1;
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);    
    }
    for(int i=1;i<n;i++){
        if(input[i-1]<=input[i]){
            dpinc[i] = dpinc[i-1]+1;
            if(max<dpinc[i]){
                max = dpinc[i];
            }
        }
        else{
            dpinc[i] = 1;
        }
        if(input[i]<=input[i-1]){
            dpdec[i] = dpdec[i-1]+1;
            if(max<dpdec[i]){
                max = dpdec[i];
            }
        }
        else{
            dpdec[i] = 1;
        }
        
    }
    printf("%d\n", max);
}