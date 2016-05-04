#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "board.h"
#include "game.h"

/////////////////////////////////////////////////////////////////////////////////////

int check_placing(Board b, Joueur j, int x, int y,int TAILLE_MAX){
  
/* Verification si la case ,n'est pas vide */   
  if( strcmp(b[x][y]->couleur,"vide") != 0){
    
	/*Si la case n'est pas vide on teste alors pour si celle-ci est occuper par le joueur courant*/ 
      if( strcmp(b[x][y]->couleur,Joueur->couleur_joueur) == 0){
	
	  printf("La case est déjà occuper par le joueur courant! \n");
	  return(1);
      
      } /* Sinon la case est forcément occuper par le joueur adverse */
      else 
      {
	  printf("La case est occuper par le joueur adverse! \n");
	  return(1);
      }
      
  }
  
/* Verification si le coup du joueur existe sur le plateau */
  if( x > TAILLE_MAX || y > TAILLE_MAX || x < 0 || y < 0 ){
    
    printf("Ces coordonnées ne sont pas dans le plateau \n");
    return(1);
     
  }

  return 0;
   
}

/////////////////////////////////////////////////////////////////////////////////////

/*Parcours du plateau avec deux boucles for puis on stocke les cases avec des pion du joueur ? PROBLEM -> discontinuité, erreur sur la creation de la chaine ?? */

int check_end_game(Board b, Joueur Player, TAILLE_MAX){
  
  int i=0, j=0;

  if ( Player.num_joueur == 1 ){
  
    for(j=0, j < TAILLE_MAX; j++){
      
      if (strcmp(b[i][j]->couleur,Player->couleur_joueur) == 0){
      
	  for(i=i+1;i < TAILLE_MAX; i++){
	    
	      if ( ( j-1 > 0) && strcmp(b[i][j-1]->couleur,Player->couleur_joueur) == 0){
	
		j = j-1;
		
	      }
	      
	      if (strcmp(b[i][j]->couleur,Player->couleur_joueur) == 0){
	
		j = j; //redondant
		
	      }
	      
	      if ( (i == TAILLE_MAX) &&( strcmp(b[i][j]->couleur,Player->couleur_joueur) == 0) ){
		
// 		printf("Gagnant!\n"); 
		return 0; //retourne 0 si succés c'est a dire gagnant
	      
	      }
	      
	      
	  }
	  
      }
      
      
    }
    
    //Fin parcours aucun gagnant trouver on retourne 1 /erreur/nongagnant
    return 1;
    
  }
  
  if ( Player.num_joueur == 2 ){
  
    for(i=0, i < TAILLE_MAX; i++){
      
      if (strcmp(b[i][j]->couleur,Player->couleur_joueur) == 0){
      
	  for(j=j+1;j < TAILLE_MAX; j++){
	    
	    //Verification que les valeurs soient sur le plateau
// 	    if ( (i < 12) && ( i > 0 ) && ( j < 12 ) && ( j > 0) ){ 
	    
	      if ( ( i-1 > 0) && strcmp(b[i-1][j]->couleur,Player->couleur_joueur) == 0){
	
		i = i-1;
		
	      }
	      
	      if (strcmp(b[i][j]->couleur,Player->couleur_joueur) == 0){
	
		i = i; //redondant
		
	      }
	      
	      if ( (j == TAILLE_MAX) &&( strcmp(b[i][j]->couleur,Player->couleur_joueur) == 0) ){
		
// 		printf("Gagnant!\n"); 
		return 0; //retourne 0 si succés c'est a dire gagnant
	      
	      }
	      
	      
	  }
	  
      }
      
      
    }
    
    //Fin parcours aucun gagnant trouver on retourne 1 /erreur/nongagnant
    return 1;
    
  }
 
 return 1;
 
}
	          
	
// 	if ( (strcmp(b[i-1][j]->couleur,"vide") != 0) && (strcmp(b[i-1][j]->couleur,Joueur->couleur_joueur) == 0) ){
// 	  
// 	  /* Cherche une nouvelle valeur sur j+1 pour continuer la chaine a partir de i-1 */
// 	   /* Verification si fin de la table, si oui alors la chaine fais le long de la table */
// 	  
// 	}else if ( (strcmp(b[i-1][j]->couleur,"vide") != 0) && (strcmp(b[i][j]->couleur,Joueur->couleur_joueur) == 0){
// 	  
// 		  /* Cherche une nouvelle valeur sur j+1 pour continuer la chaine a partir de i */
// 		  /* Verification si fin de la table, si oui alors la chaine fais le long de la table */
// 	      }
// 	      else
// 	      {
// 		
// 		  /*La chaine est fini retour au case ou pour i = 0 pour trouver le début d'une nouvelle chaine */
// 		  
// 	      }
// 	      
    }
    
  }
	
	
    
    


int Rules(Board b, Joueur j, int x, int y, int TAILLE_MAX){
  
  check_placing(b,j,x,y,TAILLE_MAX);
  
return 0;

}
  