#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct stack {
   int data;
   struct stack* next;
}Stack;
int main() {
   int n;
   scanf("%d", &n);
   
   for (int i = 0; i < n; i++) {
      Stack* s = malloc(sizeof(Stack));
      s->data = 0;
      s->next = NULL;
      char a[51];
      scanf("%s", a);
      for (int j = 0;; j++) {
         if (a[j] == '(') {
            Stack* new = malloc(sizeof(Stack));
            new->data = (s->data) + 1;
            new->next = s;
            s = new;
            
         }
         else if (a[j] == ')') {
            if (s->data == 0) {
               s->data = 1;
               break;
            }
            else if (s->data!=0)
               s = s->next;
         }
         else if (a[j] == '\0')
            break;

      }
      if (s->data==0)
         printf("%s\n", "YES");
      else
         printf("%s\n", "NO");
      free(s);
   }
   
   return 0;
}