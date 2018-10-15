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
    printf("[%s : %s] |", head->name,head->artist);
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

struct song_node* find_song(struct song_node*head, char *songname,char *artistname){
  struct song_node *find;
  strcpy(find->artist,artistname);
  strcpy(find->name,songname);
  while(cmpsong(head,find)){
    head = head->next;
  }
  return head;
}

struct song_node* find_artist(struct song_node*head,char *artistname){
  while(strcmp(head->artist,artistname)){
    head=head->next;
  }
  return head;
}

struct song_node* rand_song(struct song_node*head){
  srand(time(NULL));
  int r = rand()*songsize(head);
  while(r){
    head = head->next;
    r--;
  }
  return head;
}

struct song_node* remove_song(struct song_node* head,char*songname,char*artistname){
  struct song_node* find;
  strcpy(find->name,songname);
  strcpy(find->artist,artistname);
  while(cmpsong(head,find)){


  }
  2
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

int cmpsong(struct song_node * s1,struct song_node * s2){
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

