//
//Autheur Ignacio Ito
//
//
/*
#1 Remplir une matrice 10 par 10, chaqwue case vaut le numero de la rangée
000
111
222

#2 Remplir une matrice 10 par 10, chaqwue case vaut le numero de la colonne

#3 Remplir une matrice 10 par 10, chaqwue case vaut 0
*/

#include<stdio.h>
#include<stdlib.h>


void imprimerMatrice(int nbRangees, int nbColonnes, int maMatrice[nbRangees][nbColonnes]){
	for(int i = 0; i < nbRangees; i++){
		for(int j = 0; j < nbColonnes; j++){
			printf("%d ", maMatrice[i][j]);
		}
		printf("\n");
}


}




int main(){
	int maMatrice[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
	imprimerMatrice(3, 3, maMatrice);
	


}
	

