#include <stdio.h>


int main(){
    char a[100000];
    int cnt=0, stack=0;
    for (int i = 0; i < 100000; i++)
    {
        a[i] = 0;
    }
    scanf("%s", a);

    for(int i=0;i<100000;i++){
        if(a[i]==0){
            break;
        }
        if(a[i]=='('){
            stack++;
        }
        else if(a[i]==')'){
            if(a[i-1]=='('){
                stack--;
                cnt+=stack;
            }
            else if(a[i-1]==')'){
                cnt++;
                stack--;
            }
        }
    }
    printf("%d", cnt);
}