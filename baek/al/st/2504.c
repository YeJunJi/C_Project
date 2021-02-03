#include <stdio.h>

int main(){
    char input[31]={0}, stack[31]={0};
    int flag = 1, p=0, q=0, sum=0, tmp[31]={0};
    scanf("%s", input);

    for(int i=0;i<31;i++){
        if(input[i]==0){
            break;
        }

        if(p==0)
        
        if(input[i]=='('){
            stack[p++]='(';
        }
        else if(input[i]=='['){
            stack[p++] = '[';
        }
        else if(input[i]==')'){
            if(stack[p-1]!='('){
                flag=0; break;
            }
            else{
                if(input[i-1]=='('||input[i-1]=='['){
                    tmp[++q]+=2;
                }
                else if(input[i+1]=='('||input[i+1]=='['){
                    tmp[q]*=2;
                }
                else if(input[i-1]==')'||input[i-1]==']'){
                    tmp[q]*=2;
                }
                else{
                    tmp[q]+=2;
                }
                stack[--p]=0;
            }
        }
        else if(input[i]==']'){
            if(stack[p-1]!='['){
                flag=0; break;
            }
            else{
                if(input[i-1]=='('||input[i-1]=='['){
                    tmp[++q]+=3;
                }
                else if(input[i+1]=='('||input[i+1]=='['){
                    tmp[q]*=3;
                }
                else if(input[i-1]==')'||input[i-1]==']'){
                    tmp[q]*=3;
                }
                else{
                    tmp[q]+=3;
                }
                stack[--p]=0;
            }
        }
        printf("currnet i is : %d\n", i);
        printf("current tmp[%d] is: %d\n", q, tmp[q]);
        
    }
    for(int i=0;i<31;i++){
        if(tmp[i]==0){
            break;
        }
        sum+=tmp[i];
    }
    printf("%d\n", sum);
}