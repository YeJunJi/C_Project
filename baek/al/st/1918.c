#include <stdio.h>

int main(){
    char input[101]={0}, st[101]={0};
    scanf("%s", input);
    int p=0, q=0;
    for(int i=0;i<101;i++){
        if(input[i]==0){
            for(int j=q-1;j>=0;j--){
                printf("%c",st[j]);
            }
            break;
        }
        if('A'<=input[i]&&input[i]<='Z'){
            printf("%c", input[i]);
        }
        else if(input[i]=='+'||input[i]=='-'){
            if(q==0){
                st[q++] = input[i];
            }
            else if(st[q-1]=='*'||st[q-1]=='/'){
                while(1){
                    if(q==0){
                        break;
                    }
                    printf("%c", st[q-1]);
                    st[--q] =0;
                }
                st[q++] = input[i];
            }
            else if(st[q-1]=='+'||st[q-1]=='-'){
                printf("%c", st[q-1]);
                st[q-1] = input[i];
            }
            else{
                st[q++] = input[i];
            }
        }
        else if(input[i]=='*'||input[i]=='/'){
            if(q==0){
                st[q++] = input[i];
            }
            else if(st[q-1]=='*'||st[q-1]=='/'){
                printf("%c", st[q-1]);
                st[q-1] = input[i];
            }
            else{
                st[q++] = input[i];
            }
        }
        else if(input[i]=='('){
            st[q++] = input[i];
        }
        else if(input[i]==')'){
            while(1){
                if(st[q-1]=='('){
                    st[--q]=0;
                    break;
                }
                printf("%c", st[q-1]);
                st[--q]=0;
            }
        }
    }
}