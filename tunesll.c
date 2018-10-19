#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct song_node{ 
  char name[100];
  char artist[100];
  struct song_node *next;
  
};

//Helper//
int songcmp(struct song_node * s1,struct song_node * s2){
  int cmpname = strcmp(s1->name,s2->name);
  int cmpartist = strcmp(s1->artist,s2->artist);
  return cmpname - cmpartist;
}

int songsize(struct song_node * head){
  int count = 0;
  while(head){
    count++;
    head = head->next;
  }
  return count;
}

//Linked List functions//
void print_song(struct song_node *head){
  while(head){
    printf("[%s : %s] |", head->name,head->artist);
    head++;
  }
}

struct song_node* insert_front(struct song_node *head,char *name,char *artist){
  struct song_node *new_node = malloc(sizeof(struct song_node));
  strcpy(new_node->name,name);
  strcpy(new_node->artist,artist);
  new_node->next = head;
  return new_node;
}

struct song_node *insert_order(struct song_node *head,char *name,char*artist){
  struct song_node *new_node = malloc(sizeof(struct song_node));
  strcpy(new_node->name,name);
  strcpy(new_node->artist,artist);
  
  if(songcmp(new_node,head)<0){
    new_node->next = head;
    return new_node;
  }

  struct song_node *curr = head;
  if(curr && (songcmp(new_node,head->next) > 0)){


  }

}

struct song_node* find_song(struct song_node*head, char *name,char *artist){
  struct song_node *find;
  strcpy(find->artist,artist);
  strcpy(find->name,name);
  while(songcmp(head,find)){
    head = head->next;
  }
  return head;
}

struct song_node* find_artist(struct song_node*head,char *artist){
  while(strcmp(head->artist,artist)){
    head=head->next;
  }
  return head;
}

struct song_node* rand_song(struct song_node*head){
  int r = rand()%songsize(head);
  while(r){
    head = head->next;
    r--;
  }
  return head;
}

struct song_node* remove_song(struct song_node* head,char*name,char*artist){
  struct song_node* find;
  strcpy(find->name,name);
  strcpy(find->artist,artist);
  struct song_node *tmp;
  struct song_node *after;
  struct song_node *old_head;
  old_head = head;
  if(!songcmp(head->next,find)){
    tmp = head->next;
    after = tmp->next;
    free(tmp);
    head->next = after;
  }else{
    head = head->next;
  }
  return old_head;
}

struct song_node* free_list(struct song_node*head){
  struct song_node *tmp;
  while(head){
    tmp = head;
    head = head->next;
    free(tmp);
  }
  return head;
}



