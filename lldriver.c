#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

int main() {

  struct node *llist;
  printf("Instantiated linked list and testing print_list()...\n");
  print_list(llist);

  printf("\nTesting insert_front()...\n");
  printf("Inserting 5 at beginning of list...\n");
  llist = insert_front(llist,5);
  print_list(llist);
  printf("\nInserting 23 at beginning of list...\n");
  llist = insert_front(llist,23);
  print_list(llist);
  printf("\nInserting 12 at beginning of list...\n");
  llist = insert_front(llist,12);
  print_list(llist);
  printf("\nInserting 67 at beginning of list...\n");
  llist = insert_front(llist,67);
  print_list(llist);
  printf("\nInserting 8735 at beginning of list...\n");
  llist = insert_front(llist,8735);
  print_list(llist);

  printf("\nTesting free_list() and print_list()...\n" );
  llist = free_list(llist);
  print_list(llist);
  printf("\n");

}
  
