#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int data;
    int cal;
    struct stack *pre;
} st;


int main(){
    int flag=1;
    char input[31]={0};
    scanf("%s", input);
    st *ans=malloc(sizeof(st));
    //더미 노드 생성
    ans->data=0; ans->cal=0; ans->pre=NULL;
    for(int i=0;i<31;i++){
        if(input[i]==0){
            break;
        }
        if(input[i]=='('||input[i]=='['){
            st *new = malloc(sizeof(st));
            new->data = input[i];
            new->cal=0;
            new->pre=ans;
            ans = new;
        }
        else if(input[i]==')'){
            if(ans->data=='('){
                if(ans->cal==0){
                    ans->cal+=2;
                    ans->pre->cal += ans->cal;
                }
                else{
                    ans->cal*=2;
                    ans->pre->cal+=ans->cal;
                }
                ans = ans->pre;
            }
            else{
                flag=0;
            }
        }
        else if(input[i]==']'){
            if(ans->data=='['){
                if(ans->cal==0){
                    ans->cal+=3;
                    ans->pre->cal += ans->cal;
                }
                else{
                    ans->cal*=3;
                    ans->pre->cal+=ans->cal;
                }
                ans = ans->pre;
            }
            else{
                flag=0;
            }
        }
    }
    if(ans->pre==NULL && flag==1){
        printf("%d", ans->cal);
    }
    else{
        printf("0");
    }
}