#include <stdio.h>
#include <string.h>

int main(){
    char input1[1001]={0}, input2[1001]={0};
    scanf("%s", input1);
    scanf("%s", input2);
    int len1 = strlen(input1);
    int len2 = strlen(input2);
    printf("%d\n", len1);
    printf("%d\n", len2);
}