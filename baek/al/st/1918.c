#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    char value;
    struct list *pre;
    struct list *next;
} llist;

int main(){
    char input[101]={0};
    scanf("%s", input);

    llist cur = malloc(sizeof(llist));


}