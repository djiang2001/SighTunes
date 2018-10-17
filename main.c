#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "tunesll.h"


int main(){
  printf("=======LINKED LIST========\n");
  struct song_node* test;
  printf("Empty List\n");
  print_song(test);
  test = insert_front(test,"Sandstorm","Darude");
  test = insert_front(test,"Hello","World");
  test = insert_front(test,"Ignite","Zedd");
  printf("Testing insert front\n");
  print_song(test);


  return 0;
}
