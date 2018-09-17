

//
//
//Author Ignacio
// Les tableaux
//

#include<stdio.h>
#include<stdlib.h>


/*
int main(int argc, char const *argv[])
{
	char nom [] = {'G', 'E', 'R', 'T', 'R', 'U', 'D', 'E'};
	printf("%c", nom[3]);
	printf("%c", nom[5]);
	printf("%c", nom[3]);
	printf("%c", nom[5]);
	printf("\n");

}
*/

/*
int main()
{
	char nom [] = {'G', 'E', 'R', 'T', 'R', 'U', 'D', 'E'};
	printf("%c", nom[0]);
	printf("%c", nom[8]);
	printf("%c", nom[88]);
	printf("%c", nom[-1]);
	printf("\n");

}
*/

/*
int main()
{
	char nom[] = {'T', 'E', 'S', 'T', 'E', 'T', 'E', 'X', 'T', 'O', 'I', 'N', 'P', 'U', 'T'};
	printf("%c %c %c %c %c %c \n", nom[0], nom[2], nom[4], nom[5], nom[10], nom[8]);

}

*/
/*
int main(int argc, char const *argv[])
{
	int f;
	char fam[] = {2, 0, 0, 0, 1, 0, 3, 1, 0, 0 , 0, 4};

	for(f = 0; f < 12; f++){
		printf("\n La %d a %d enfants\n", f+1, fam[f]);
	}
	
	return 0;
}
*/

//
//TROUVER LE NOMBRE DE PERSONNES QUI ONT 0 ENFANTS
//TROUVER LE MAXIMUM
//L'INDICE DE LA PERSONNE QUI A LE PLUS D'ENFANTS
//
//


int main()
{
	int contaZero = 0;
	int somEnfants = 0;
	int maisEnf = 0;
	int indice = 0;
	int fam[] = {2, 0, 0, 0, 1, 0, 3, 1, 0, 0 , 0, 4};

	for(int i = 0; i < 12; i++){




		if(fam[i] == 0){
			contaZero++;
		}



		somEnfants = fam[i] + somEnfants;

		if(fam[i] > maisEnf){
			maisEnf = fam[i];
			indice = i;
		}


	}

	printf("%d\n", contaZero);
		printf("%d\n", somEnfants);
			printf("%d\n", indice);
				printf("%d\n", maisEnf);




}






























