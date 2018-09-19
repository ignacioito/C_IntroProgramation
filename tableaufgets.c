//
//
//Autheur Ignacio Ito
//
/* Exercice: Faites un programme qui "echo" l'entrée de l'usager jusqu'à ce que celui ci entre
une chaine vida

*/

#include<stdlib.h>
#include<stdio.h>


int main()
{
	const int TAILLE = 256;
	char nom[TAILLE];


	while(nom[0] != '\n'){
	printf("Saississez un text\n");
	fgets(nom, TAILLE, stdin);
	printf("Text: %s\n", nom);
	}
	return 0;

}