#include <stdio.h>

int main(){
    char input[1000001]={0}, boom[37]={0}, st[1000001]={0};
    scanf("%s", input);
    scanf("%s", boom);
    int p=0, q=0, flag=0, print=0;
    for(int i=0;i<1000001;i++){
        //printf("%d %d %d: ", i, p, q);
        if(input[i]==0){
            break;
        }
        if(p==0){
            if(input[i]==boom[0]){
                st[p++] = input[i];
            }
            else{
                print=1;
                printf("%c", input[i]);
            }
        }
        else{
            if(input[i]==boom[p-1-flag]){
                flag++;
                st[p++] = input[i];
            }
            else if(input[i]==boom[p-flag]){
                if(boom[p-flag+1]==0){
                    st[p++] = input[i];
                    while(1){
                        if(st[p-flag]==boom[0]){
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
                printf("%c", input[i]);
                print=1;
            }
        }
    }
    if(!print){
        printf("FRULA");
    }
}