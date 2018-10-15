#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct song_node{ 
  char name[100];
  char artist[100];
  struct song_node *next;
};

void print_song(struct song_node *head){
  while(head){
    printf("[%s : %s] |", head->name,head->artist};
    head++;
  }
}

struct song_node* insert_front(struct song_node * head,char*n,char*a){
  struct song_node *new_node = malloc(sizeof(struct song_node));
  strcpy(new_node->name,n);
  strcpy(new_node->artist,a);
  new_node->next = head;
  return new_node;
}


struct song_node* f_song(struct song_node*, char *artist,char *song){
  


}
struct song_node* free_list(struct song_node*head){
  struct node *tmp;
  while(head){
    tmp = head;
    head = head->next;
    free(tmp);
  }
  return head;
}

int compto(struct song_node * s1,struct song_node * s2){



}

