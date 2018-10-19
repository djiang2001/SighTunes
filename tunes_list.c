#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  char name[100];
  char artist[100];
  struct node * next;
};
  
//Insert nodes at the front
  struct node * insert_front (struct node* head, char * _name, char * _artist){
    struct node * front = malloc(sizeof(struct node));
    strncpy(front->name,_name,100);
    strncpy(front->artist,_artist,100);
    front->next = head;
    return front;
  }

//Helper function: 
/* Returns -1 if arg1 is alphabetically first.
Else, return 1.
There should be no returning of 0 since assuming no duplicates.
*/
int compare(struct node arg1, struct node arg2){
  //First, check the artist.
  if (strcmp(arg1->artist,arg2->artist)){
    return strcmp(arg1->artist,arg2->artist);
  }
  //If they are the same artist, THEN compare song.
  return strcmp(arg1->name,arg2->name);
}

//Alphabetical insert
struct node * insert_alphabetical(struct node* head, char * _name, char * _artist){
 
  struct node * new_node = malloc(sizeof(struct node));
  strncpy(new_node->name,_name,100);
  strncpy(new_node->artist,_artist,100);
  front->next = head;
  struct node * prev = head;
  struct node * cur = prev->next;
  while (cur != NULL){
    if (compare(new_node,cur) < 0){
      new_node -> next = cur;
      prev->next = new_node;
      return head;
    }
    prev = cur;
    cur = cur->next;
  }
  //In case it's the last alphabetically in the linked list.
  prev->next = new_node;
  return head;
}



