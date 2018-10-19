#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tunesll.h"
#include "array.h"

int add_song(struct song_node *table[27], struct song_node *song){
  int slot = (song->artist)[0] - 'a';
  if(slot > 25 || slot < 0){
    slot = 26;
  }
  table[artist] = insert_order(table[artist],song->name,song->artist);
}

struct song_node *find_song(struct song_node *table[27],char*name,char*artist){
  int find = artist[0] - 'a';
  if(find > 25 || find < 0){
    find = 26;
  }
  struct song_node *head = find_song(table[find],name,artist);
  return head;
}

struct song_node *findartist(struct song_node *table[27], char *artist){
  int letter = artist[0] - 'a';
  if(letter > 25 || letter < 0){
    letter = 26;
  }
  struct song_node *head = find_artist(table[letter],artist);
  struct song_node *marker = head;
  if(head){
    printf("artist found! \n");
    while(marker && !strcmp(marker->artist,artist)){
      print_song(marker);
      marker = marker->next;
    }
    return head;
  }
  printf("artist not found \n");
}

void print_letter(char letter){
  int slot = letter - 'a';
  if(table[slot]){
    print_song(slot);
  }else{
    printf("songs not found under this letter \n");
  }
}

void print_artist_song(char *artist){
  int slot = artist[0] - 'a';
  if(slot > 25 || slot < 0){
    slot = 26;
  }
  struct song_node *head = find_artist(table[slot],artist);
  while(head && !strcmp(head->artist,artist)){
    print_song(head);
    head = head->next;
  }
}

void print_library(struct song_node *table[27]){
  int i;
  for(i = 0; i < 27;i++){
    if(i < 26){
      printf("library letter %c \n",i+'a');
      print_song(table[i]);
    }else{
      printf("library symbol \n");
      print_song(table[i]);
    }
  }
}

void shuffle(struct song_node *table[27]){

}

int delete_song(struct song_node *table[27],song_node *head){
  int slot = (head->artist)[0] - 'a';
  if(slot > 25 || slot < 0){
    slot = 26;
  }
  remove_song(table[slot],head->name,head->artist);
  return 0;
}

int clear_lib(struct song_node *table[27]){
  int i;
  for(i = 0; i < 27;i++){
    table[i] = free_list(table[i]);
  }
}
