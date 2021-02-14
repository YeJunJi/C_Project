#include <stdio.h>

int main(){
    int n, p=0, q=0;
    scanf("%d", &n);
    char input[101] = {0}, st[101];
    scanf("%s", input);
    double inputNum[n];
    double stack=0, res=0, stn[2]={0};
    for(int i=0;i<n;i++){
        scanf("%lf", &inputNum[i]);
    }

    for(int i=0;i<101;i++){
        if(input[i]==0){
            if(stack!=0){
                res+=stack;
            }
            break;
        }
        if('A'<=input[i]&&input[i]<='Z'){
            stack=0;
            st[p++] = input[i];
        }
        else if(input[i]=='*'){
            if(stack==0 && p>1){
                stack=inputNum[(int)st[p-2]-65]*inputNum[(int)st[p-1]-65];
                p-=2;
            }
            else if(stack==0 && p==1){
                res*=inputNum[(int)st[p-1]-65];
                p--;
            }
            else if(stack!=0 && p==0){
                res*=stack;
                stack=0;
            }
            else{
                stack*=inputNum[(int)st[p-1]-65];
                p--;
            }
        }
        else if(input[i]=='/'){
            if(stack==0 && p>1){
                stack=inputNum[(int)st[p-2]-65]/inputNum[(int)st[p-1]-65];
                p-=2;
            }
            else if(stack==0 && p==1){
                res/=inputNum[(int)st[p-1]-65];
                p--;
            }
            else if(stack!=0 && p==0){
                res/=stack;
                stack=0;
            }
            else{
                stack/=inputNum[(int)st[p-1]-65];
                p--;
            }
        }
        else if(input[i]=='+'){
            if(stack==0 && p>1){
                stack=inputNum[(int)st[p-2]-65]+inputNum[(int)st[p-1]-65];
                p-=2;
            }
            else if(stack==0 && p==1){
                res+=inputNum[(int)st[p-1]-65];
                p--;
            }
            else if(stack!=0 && p==0){
                res+=stack;
                stack=0;
            }
            else{
                stack+=inputNum[(int)st[p-1]-65];
                p--;
            }
        }
        else if(input[i]=='-'){
            if(stack==0 && p>1){
                stack=inputNum[(int)st[p-2]-65]-inputNum[(int)st[p-1]-65];
                p-=2;
            }
            else if(stack==0 && p==1){
                res-=inputNum[(int)st[p-1]-65];
                p--;
            }
            else if(stack!=0 && p==0){
                res-=stack;
                stack=0;
            }
            else{
                stack-=inputNum[(int)st[p-1]-65];
                p--;
            }
        }
        printf("%0.2lf\n", res);
    }
}