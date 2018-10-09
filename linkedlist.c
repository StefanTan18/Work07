#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

void print_list(struct node *n){
  while (n->next){
    printf(%d, n->i);
  }
}

struct node * insert_front(struct node *n, int x){
  struct node temp;
  temp.i = x;
  temp.next = n;
  return temp;
}

struct node * free_list(struct node *n){

}
