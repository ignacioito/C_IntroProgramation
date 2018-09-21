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
void imprimerMatrice(int nbRangees, int nbColonnes){
	
    int maMatrice[nbRangees][nbColonnes]; 
//	maMatrice[11][11]{{0,1,2,3,4,5,6,7,8,9,10}}
	for(int i = 0; i < 10; i++){
		for (int j = 0; j < 10; ++j)
		printf("%d", maMatrice[nbRangees][nbColonnes] = i);
		printf("\n");
		}
		
		}

int main()
{
	imprimerMatrice(10, 10);
}





































/*
void imprimerMatrice(int nbRangees, int nbColonnes, int maMatrice[nbRangees][nbColonnes]){
	for(int i = 0; i < nbRangees; i++){
		for(int j = 0; j < nbColonnes; j++){
			printf("%d ", maMatrice[i][j]);
		}
		printf("\n");
}


}




int main(){
	int maMatrice[4][4] = {{0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}};
	imprimerMatrice(4, 4, maMatrice);
	


}


void imprimerMatrice(int nbRangees, int nbColonnes, int maMatrice[nbRangees][nbColonnes]){
	for(int i = 0; i < nbRangees; i++){
		for(int j = 0; j < nbColonnes; j++){
			printf("%d ", maMatrice[i][j]);
		}
		printf("\n");
}


}




int main(){
	int maMatrice[4][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}};
	imprimerMatrice(4, 4, maMatrice);
	


}
	



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
	



void imprimerMatrice(int nbRangees, int nbColonnes, int maMatrice[nbRangees][nbColonnes]){
	for(int i = 0; i < nbRangees; i++){
		for(int j = 0; j < nbColonnes; j++){
			printf("%d ", maMatrice[i][j]);
			printf("\n");
		}
		printf("\n");
	}

	int main(){
		int maMatrice[4][3] = {{1, 2, 6},{-9, 0, 4},{3, 0, 1},{0, 0, 6}};
		imprimerMatrice(4, 3, maMatrice);

		int maMatrice[4][3];
	}


*/








