#include <stdio.h>
#include <stdlib.h>

typedef struct llist{
    char data;
    struct llist *pre;
    struct llist *next;
} list;

void printList(list *first){
    for(list *cur = first; cur!=NULL; cur = cur->next){
        printf("%c", cur->data);
    }
    printf("\n");
}

list *first_node(list *cur){
    while(1){
        if(cur->pre==NULL){
            return cur;
        }
        cur = cur->pre;
    }
}

int main(){
    list *current_node = malloc(sizeof(list));
    current_node->data = NULL;
    current_node->pre = NULL;
    current_node->next = NULL;

    char input[100001]={0};
    scanf("%s", input);
    for(int i=0;i<100001;i++){
        if(input[i]==0){
            break;
        }
        if(current_node->data == 0){
            current_node->data = input[i];
        }
        else{
            list *new = malloc(sizeof(list));
            current_node->next = new;
            new->data = input[i];
            new->pre = current_node;
            new->next = NULL;
            current_node = new;
        }
    }

    int m, flag=0;
    scanf("%d\n", &m);
    for(int i=0;i<m;i++){
        char work;
        scanf(" %c", &work);

        if(work=='P'){
            char add;
            scanf(" %c", &add);
            list *tmp = malloc(sizeof(list));
            tmp->data = add;
            if(flag){
                current_node->pre = tmp;
                tmp->next = current_node;
                current_node = tmp;
                flag = 0;
            }
            else if(current_node->next == NULL){
                current_node->next = tmp;
                tmp->pre = current_node;
                current_node = tmp;

            }
            else{
                //오른쪽부터 연결
                tmp->next = current_node->next;
                current_node->next->pre = tmp;
                //왼쪽 연결
                tmp->pre = current_node;
                current_node->next = tmp;
                current_node = tmp;
            }
        }
        else if(work == 'L'){
            if(current_node->pre!=NULL){
                current_node = current_node->pre;
            }
            else{
                flag = 1;
            }
        }
        else if(work == 'D'){
            if (flag){
                flag = 0;
            }
            else if(current_node->next!=NULL){
                current_node = current_node->next;
            }
        }
        else if(work== 'B'){
            if(!flag){
                if(current_node->pre==NULL){
                    flag = 1;
                    current_node->next->pre = NULL;
                    current_node = current_node->next;
                }
                else if(current_node->next==NULL){
                    current_node->pre->next = NULL;
                    current_node = current_node->pre;
                }
                else{
                    current_node->pre->next = current_node->next;
                    current_node->next->pre = current_node->pre;
                    current_node = current_node->pre;
                }

            }
        }
    }
    printList(first_node(current_node));

}