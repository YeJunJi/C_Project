#include <stdio.h>
#include <string.h>

#define max 10000



typedef struct {
    int value[max];
    int topIndex;
} currentStack;


void push(currentStack *a, int top){
    a->value[++a->topIndex] = top;
}

int pop(currentStack *a){
    if(a->topIndex == -1){
        return -1;
    }
    int tmp = a->value[a->topIndex];
    a->topIndex--;
    return tmp;
}

int top(currentStack a){
    if(a.topIndex==-1){
        return -1;
    }
    return a.value[a.topIndex];
}

int size(currentStack a){
    return a.topIndex+1;
}

int empty(currentStack a){
    if (a.topIndex==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    currentStack a;
    a.topIndex= -1;
    int n;
    char input[10];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s",input);
        int tmpInput;
        if(!strncmp(input, "push", 4)){
            scanf("%d\n", &tmpInput);
            push(&a, tmpInput);
        }

        else if(!strncmp(input, "pop", 3)){
            printf("%d\n", pop(&a));
        }
        else if(!strncmp(input, "top", 3)){
            printf("%d\n", top(a));
        }
        else if(!strncmp(input, "size", 4)){
            printf("%d\n", size(a));
        }
        else if(!strncmp(input, "empty", 5)){
            printf("%d\n", empty(a));
        }
    }
}