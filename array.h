#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tunesll.h"

#ifndef ARRAY_H
#define ARRAY_H

int add_song(struct song_node *table[27], struct song_node *song);
struct song_node *find_song(struct song_node *table[27],char*name,char*artist);
struct song_node *findartist(struct song_node *table[27], char *artist);
void print_letter(char letter);
void print_artist_song(char *artist);
void print_library(struct song_node *table[27]);
void shuffle_print(struct song_node* head);
int delete_song(struct song_node *table[27],song_node *head);
int clear_lib(struct song_node *table[27]);
#endif
