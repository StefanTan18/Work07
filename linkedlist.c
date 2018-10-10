#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

void print_list(struct node *n){
  struct node *current = n;
  while (current){
    printf("%d ", current->i);
    current = current->next;
  }
}

struct node * insert_front(struct node *n, int x){
  struct node *temp = malloc(sizeof(struct node));
  temp->i = x;
  temp->next = n;
  return temp;
}

struct node * free_list(struct node *n){
  while (n){
    struct node *next = n->next;
    free(n);
    n = next;
  }
  free(n);
  return n;
}
