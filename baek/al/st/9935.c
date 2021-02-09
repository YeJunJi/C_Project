#include <stdio.h>
#include <string.h>

int main(){
    char input[1000001]={0}, boom[37]={0}, st[1000001]={0};
    scanf("%s", input);
    scanf("%s", boom);
    int lastIndex=36, p=0;
    while(boom[lastIndex]==0){
        lastIndex--;
    }

    for(int i=0;i<1000001;i++){
        if(input[i]==0){
            break;
        }
        st[p] =  input[i];
        if(st[p]==boom[lastIndex]){
            int tmp = lastIndex;
            int temp = p;
            while(1){
                if(st[temp]!=boom[tmp]){
                    break;
                }
                if(tmp==0){
                    for(int j=temp;j<=temp;j++){
                        st[j] = 0;
                    }
                    p = temp-1;
                    break;
                }
                temp--;tmp--;
            }
        }
        p++;
    }
    if(p!=0){
        for(int i=0;i<p;i++){
            printf("%c", st[i]);
        }
    }
    else{
        printf("FRULA");
    }

}