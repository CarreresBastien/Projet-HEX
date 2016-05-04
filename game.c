#include <stdio.h>
#include "board.h"
#include "game.h"
#include <string.h>
#include <stdlib.h>


void coup(Board b, Joueur j,Coup last, int tour)
{
	int x;
	int y;

	printf("Le joueur numéro %d joue\n",j->num_joueur);
	printf("Rentrer les coordonnées du coup que vous voulez jouer:  ");
	printf("x= ");
	scanf("%d",&x);
    printf("   y= ");
	scanf("%d",&y);
	while (strcmp(b[x][y]->couleur,"vide"))
	{
		printf("Cette case est deja occupee par un pion\n");
		printf("Rentrer les coordonnées du coup que vous voulez jouer:  ");
		printf("x= ");
		scanf("%d",&x);
		printf("   y= ");
		scanf("%d",&y);
	}
	push(b,j,x,y);
	last->x=x;
	last->y=y;
	last->couleur_pion=j->couleur_joueur;
	last->owner=j;
	last->num_tour=tour;
}

void change_player(Joueur *cur,Joueur j1,Joueur j2)
{
	if ((*cur)==j1)
	{
		(*cur)=j2;
	}
	else
	{
		(*cur)=j1;
	}
}
