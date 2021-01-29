#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct stack {
   int data;
   struct stack* next;
}Stack;
int main() {
   Stack* pre = malloc(sizeof(Stack));
   for (int i = 8; i > 0; i--) {
      Stack* new = malloc(sizeof(Stack));
      new->data = i;
      new->next = pre;
      pre = new;
      free(new);
   }
   int n;
   scanf("%d", &n);
   int a[100001];
   char c[200001];
   int count = 0;
   int tf = 1;
   for (int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
   }
   Stack* store = malloc(sizeof(Stack));
   store->next = NULL;
   for (int j = 0; j < n; j++) {
      if (a[j] == store->data) {
         store = store->next;
         c[count++] = '-';
      }
      else if (a[j] < pre->data) {
         printf("NO\n");
         tf = 0;
         break;
      }
      else if (store->data != a[j]) {
         while (1) {
            if (pre->data <= a[j]) {
               Stack* n = malloc(sizeof(Stack));
               n->data = pre->data;
               n->next = store;
               store = n;
               pre = pre->next;
               c[count++] = '+';
            }
            if (store->data == a[j]) {
               store = store->next;
               c[count++] = '-';
               break;
            }
         }
      }
   }
   if (tf == 1) {
      for (int i = 0;; i++) {
         if (c[i] != '+' && c[i] != '-')
            break;
         printf("%c\n", c[i]);
      }
   }
   return 0;
}