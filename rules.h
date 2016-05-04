#ifndef __BOARD_H_
#define __BOARD_H_
#define TAILLE_MAX 11

int check_placing(Board b, Joueur j, int x, int y,int TAILLE_MAX);

void check_end_game(Board b, Joueur Player, TAILLE_MAX);

#endif
