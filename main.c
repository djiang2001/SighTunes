#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "tunesll.h"
#include "array.h"


int main(){
  printf("=======LINKED LIST========\n");
  struct song_node* test;
  printf("Empty List\n");
  print_song(test);
  test = insert_front(test,"sandstorm","darude");
  test = insert_front(test,"hello","world");
  test = insert_front(test,"ignite","zedd");
  printf("Testing insert front\n");
  print_song(test);
  test = insert_order(test,"hi","bye");
  test = insert_order(test,"whoa","ow");
  printf("Testing insert order \n");
  print_song(test);

  struct song_node *find;
  find = find_song(test,"hi","bye");
  printf("looking for |hi - bye|: |%s - %s| \n", find->name, find->artist);

  printf("Testing find artist\n");
  char *artist;
  strcpy(artist,"bye");
  find = find_artist(test,artist);
  printf("looking for artist bye: |%s- %s| \n ", find->name, find->artist);

  printf("Testing rand print");
  shuffle_print(test);
  
  test = remove_song(test,"hi", "bye");
  printf("Testing remove song, removed hi bye");
  print_song;

  printf("Testing free list");
  free_list;
  print_song;

  printf("Add song");
  struct song_node *first;
  first = insert_front(first, "helllo", "oh");
  struct song_node *second;
  second = insert_front(second, "byee", "wow");
  int i;
  for(i = 0; i < 27; i++){
    table[i] = 0;
  }
  add_song(table,first);
  add_song(table,second);
  printf("print library");
  print_library;
  printf("print artist songs");
  print_artist_song;
  printf("print letter");
  print_letter;

  struct song_node *where;
  where = find_song(table,"helllo","oh");

  printf("find song helllo- oh");
  printf(" %s- %s: \n", where->name,where->artist);
  
  printf("testing shuffle");
  shuffle_print(table);
  printf("printing helllo");
  print_artist_song("helllo");
  delete_song(table,second);
  printf("delete bye-wow");
  print_library;
  clear_lib;
  printf("clear library");
  print_library;
  return 0;
}
