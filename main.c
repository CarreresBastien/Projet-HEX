#include <stdio.h>
#include "board.h"
#include "game.h"
#include <string.h>
#include <stdlib.h>

int main()
{
	Board b;
	Joueur player1=malloc(sizeof(struct s_joueur));
	Joueur player2=malloc(sizeof(struct s_joueur));
	Joueur current=malloc(sizeof(struct s_joueur));
	Coup last=malloc(sizeof(struct s_coup));
	int tour=1;
	int i;
	int j;
	printf("OK\n");
	player1->num_joueur=1;
	player1->couleur_joueur="rouge";
	printf(" Joueur numero %d de couleur %s\n",player1->num_joueur,player1->couleur_joueur);
	player2->num_joueur=2;
	player2->couleur_joueur="bleu";
	printf(" Joueur numero %d de couleur %s\n",player2->num_joueur,player2->couleur_joueur);
	current=player1;
	init_board(b);
	printf("OK\n");
	coup(b,current,last,tour);
	change_player(&current,player1,player2);
	coup(b,current,last,tour);
	tour=tour+1;
	

/*
	if (full(b))
	{
		printf("Tableau plein\n");
	}
	else
	{
		printf("Erreur\n");
	}*/
	

	free(current);
	free(player1);
	free(player2);
	
	for (i=0;i<TAILLE_MAX;i++)
	{
		for (j=0;j<TAILLE_MAX;j++)
		{
			free(b[i][j]);
			
		}
	}
		
	
return(0);
}
	
