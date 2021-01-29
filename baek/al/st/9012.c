#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int n;
    char input[51];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        int stack = 0;
        bool flag = false;
        for(int j=0;j<50;j++){
            input[j] = 0;
        }
        scanf("%s",input);
        for(int j=0;j<51;j++){
            if(input[j]==0){
                if(stack == 0){
                    flag = true;
                }
                break;
            }
            else if(input[j] == '('){
                stack++;
            }
            else if(input[j]==')'){
                stack--;
                if(stack<0){
                    break;
                }
            }
        }
        if(flag == true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }  
    }
    
}