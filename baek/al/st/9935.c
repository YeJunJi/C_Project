#include <stdio.h>

int main(){
    char input[1000001]={0}, boom[37]={0}, st[1000001]={0};
    scanf("%s", input);
    scanf("%s", boom);
    int p=0, flag=0, print=0, one=0;
    if(boom[1]==0){
        one =1;
    }
    for(int i=0;i<1000001;i++){
        if(input[i]==0){
            break;
        }
        if(one){
            if(input[i]!=boom[0]){
                printf("%c", input[i]);
                print=1;
            }
        }
        else if(input[i]==boom[p-flag]){
            if(p-1-flag!=0){
                for(int i=0;i<p;i++){
                    printf("%c", st[i]);
                }
                printf("%c", input[i]);
                p=0; flag=0;
                print=1;
            }else{
                flag++;
                st[p++] = input[i];
            }
        }
        else if(input[i]==boom[p-flag]){
            if(boom[p-flag+1]==0){
                while(1){
                    if(st[p-1]==boom[0]){
                        st[--p] = 0;
                        if(flag>0){
                            flag--;
                        }
                        break;
                    }
                    st[--p] =0;
                }
            }
            else{
                st[p++] = input[i];
            }

        }
        else{
            for(int i=0;i<p;i++){
                printf("%c", st[i]);
            }
            p=0; flag=0;
            print=1;
            if(input[i]==boom[0]){
                st[p++] = input[i];
            }
            else{
                printf("%c", input[i]);
            }
        }
    }
    if(p!=0){
        for(int i=0;i<p;i++){
            printf("%c", st[i]);
        }
    }
    else if(!print){
        printf("FRULA");
    }
}