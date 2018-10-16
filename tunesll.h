#ifndef TUNESLL_H
#define TUNESLL_H

struct song_node{ 
  char name[100];
  char artist[100];
  struct song_node *next;
};

void print_song(struct song_node *head);

struct song_node* insert_front(struct song_node * head,char*n,char*a);

struct song_node* find_song(struct song_node*head, char *songname,char *artistname);

struct song_node* find_artist(struct song_node*head,char *artistname);

struct song_node* rand_song(struct song_node*head);

struct song_node* remove_song(struct song_node* head,char*songname,char*artistname);

struct song_node* free_list(struct song_node*head);

int cmpsong(struct song_node * s1,struct song_node * s2);

int songsize(struct song_node * head);
#endif
