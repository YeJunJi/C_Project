#include <stdio.h>
#include <string.h>

int main(){
    char input[51]={0}, st[51]={0};
    scanf("%s", input);
    int p=0, cnt=0;
    for(int i=0;i<strlen(input);i++){
        if('0'<=input[i] && input[i]<='9'||input[i]=='('){
            st[p++] = input[i];
        }
        else if(input[i]==')'){
            while(st[p-1]!='('){
                cnt++;
                st[--p] = 0;
            }
            st[--p] = 0;
            int multiply = (int)st[p-1]-48;
            cnt*=multiply;
            st[--p] = 0;
        }
    }
    if(p!=0){
        cnt+=p;
    }
    printf("%d\n", cnt);
}