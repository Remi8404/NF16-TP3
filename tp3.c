#include <stdio.h>
#include <stdlib.h>
#include tp3.h

Graphe* creerGraphe(){
  Graphe g={NULL}
  return *g;
}

void creerSommet(graphe *g, int id){
  
  if(g->s==NULL){
    Sommet s={id,NULL,NULL};
    g->s = *s;
  }
  else if(rechercherSommet(g, id)!=NULL){
    printf("Le sommet %d existe déjà !", id);
  }
  else{
    // a completer
  }
}
