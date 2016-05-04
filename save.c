#include <stdio.h>
#include <stdlib.h>
#include "save.h"
#include "board.h"

void save_game(Board B)
{
	FILE *f=fopen("save","wb");
	if (f!=NULL)
	{
		fwrite(B,sizeof(Board),1,f);
		fclose(f);
	}
	
}


Board charger_partie()
{
	Board b=malloc(sizeof(Board));
	FILE *f=fopen("save","rb");
	if (f!=NULL)
	{
		fread(B,sizeof(Board),1,f);
		fclose(f);
	}
	return(b);
}

Board cancel_last (Board b,Coup C)
{
	push(b,NULL,C->x,C->y);
}


		
