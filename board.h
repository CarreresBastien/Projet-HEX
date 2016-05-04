#ifndef __BOARD_H_
#define __BOARD_H_
#define TAILLE_MAX 11


typedef struct s_joueur{
					int num_joueur;
					char* couleur_joueur;
					}*Joueur;

typedef struct s_case{
					int x;
					int y;
					char* couleur;
					Joueur owner;
					}*Case;
					


					

typedef struct s_coup{
					int x;
					int y;
					char * couleur_pion;
					Joueur owner;
					int num_tour;
				}*Coup;
typedef Case Board[TAILLE_MAX][TAILLE_MAX];
				
int full(Board b);

void push(Board b,Joueur j,int x,int y);

void init_board (Board b);

#endif
