#include <stdio.h>
//문제점 A+B+C-D/E와 같은 

int main(){
    char input[101]={0}, st[101]={0}, ans[101]={0};
    scanf("%s", input);
    int p=0, q=0;
    for(int i=0;i<101;i++){
        if(input[i]==0){
            while(st[0]!=0){
                ans[p++] = st[--q];
                st[q+1] = 0;
            }
            break;
        }
        if('A'<=input[i]&&input[i]<='Z'){
            ans[p++] = input[i];
        }
        else if('*'<=input[i]&&input[i]<='/'){
            if((st[q-1]=='*'||st[q-1]=='/')&&(input[i]=='+'||input[i]=='-')){
                while(1){
                    if(st[q-1]!='*'||st[q-1]=='/'){
                        st[q++] = input[i];
                        break;
                    }
                    ans[p++] = st[--q];
                }
            }
            else{
                st[q++]= input[i];
            }
        }
        else if(input[i]=='('){
            st[q++] = input[i];
        }
        else if(input[i]==')'){
            while(1){
                if(st[q-1]=='('){
                    st[--q] = 0;
                    break;
                }
                ans[p++] = st[--q];
            }
        }
    }
    for(int i=0;i<101;i++){
        if(ans[i]==0){
            break;
        }
        printf("%c", ans[i]);
    }
}