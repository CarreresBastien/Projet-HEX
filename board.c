#include <stdio.h>
#include "board.h"
#include <string.h>
#include <stdlib.h>


void init_board (Board b)
{
	int i;
	int j;
	for (i=0;i<TAILLE_MAX;i++)
	{
		for (j=0;j<TAILLE_MAX;j++)
		{
			b[i][j]=(Case)malloc(sizeof(struct s_case));
			b[i][j]->couleur="vide";
			b[i][j]->owner=NULL;
		}
	}
}
void push(Board b,Joueur j,int x,int y)
{
	if (j!=NULL)
	{
		b[x][y]->couleur=j->couleur_joueur;
	}
	else
	{
		b[x][y]->couleur="vide";
	}
	b[x][y]->owner=j;
}

int full(Board b)
{
	int i;
	int j;
	
	for (i=0;i<TAILLE_MAX;i++)
	{
		
		for (j=0;j<TAILLE_MAX;j++)
		{
			
			if (!strcmp(b[i][j]->couleur,"vide"))
			{
				return(0);
			}
		}
	}
return(1);
}
