#include <stdio.h>
#include <string.h>

int main(){
    while(1){
        char input[101]={0}, stack[101]={0};
        int flag=1, p=0;
        getchar();
        scanf("%[^.]s", input);
        getchar();

        //scanf(" %[^.]s", input);을 할 때 입력 맨 첫번째 인자에 있는 공백이 입력되지 않음
        if(input[0]==0){
            break;
        }
        for (int i = 0; i < 101; i++)
        {   
            if(input[i]=='('){
                stack[p++]='(';
            }
            else if(input[i]==')'){
                if(stack[p-1]!='('){
                    //NO를 출력
                    flag = 0;
                    break;
                }
                else{
                    stack[--p]=0;
                }
            }
            else if(input[i]== '['){
                stack[p++] = '[';
            }
            else if(input[i]==']'){
                if(stack[p-1]!='['){
                    flag =0;
                    break;
                }
                else{
                    stack[--p]=0;
                }
            }
        }
        if(flag==1 && p==0){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    

}