#include <stdio.h>

int main(){
    int n, p=0;
    double inputNum[101]={0}, res[101]={0};
    scanf("%d", &n);
    char input[101]={0};
    scanf("%s", input);
    for(int i=0;i<n;i++){
        scanf("%lf", &inputNum[i]);
    }

    for(int i=0;i<101;i++){
        if(input[i]==0){
            break;
        }
        if('A'<=input[i] && input[i]<='Z'){
            res[p++] = inputNum[input[i]-65];
        }
        else if(input[i]=='*'){
            res[p-2] *= res[p-1];
            p--;
        }
        else if(input[i]=='/'){
            res[p-2] /= res[p-1];
            p--;
        }
        else if(input[i]=='+'){
            res[p-2] += res[p-1];
        
            p--;
        }
        else if(input[i]=='-'){
            res[p-2] -= res[p-1];
            p--;
        }
    }
    printf("%0.2lf", res[0]);
}