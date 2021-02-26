#include <stdio.h>
#include <string.h>

typedef struct{
    char data;
    int sum;
} stack;



int main(){
    char input[51]={0};
    stack st[51];
    scanf("%s", input);
    int p=0, cnt=0, flag=0;
    for(int i=0;i<strlen(input);i++){
        if('0'<=input[i] && input[i]<='9'||input[i]=='('){
            st[p].data = input[i];
            if(input[i]=='('){
                st[p++].sum=0;
            }
            else{
                st[p++].sum=1;
            }
        }
        else if(input[i]==')'){
            while(st[p-1].data!='('){
                st[p-2].sum+=st[p-1].sum;
                p--;
            }
            if(p<=1){
                p--;
            }
            else{
                st[p-2].sum = ((int)st[p-2].data-48)*st[p-1].sum;
                p--;
            }
        }
    }
    while(p!=1){
        st[p-2].sum += st[p-1].sum;
        p--;
    }
    printf("%d", st[0].sum);
}