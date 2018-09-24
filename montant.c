//
//Defi#1
//Autheur: Ignacio Ito
/* Défi : Mettez 2147483646 dans un int.
C’est le plus grand nombre qui entre dans un int sur un Mac.
Incrémentez-le. Que s’est-il passé?
Incrémentez-le à nouveau. Que s’est-il passé? */
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	//printf("Donnez 4 nombres et je ferais l'addiction de leur moyenne: \n");
	int n;
	int nota100, nota50, nota20, nota10, nota5, moeda1, moeda2, moeda50, moeda25, moeda10, moeda05, moeda01;
	
    printf("Donnez un valeur est reçoi en pièces de monnaie: \n");
    scanf("%d\n", &n);
    

    nota100 = n / 100;
    n = n % 100;
    nota50 = n / 50;
    n = n % 50;
    nota20 = n / 20;
    n = n % 20;
    nota10 = n / 10;
    n = n % 10;
    nota5 = n / 5;
    n = n % 5;
    moeda2 = n / 2;
    n = n % 2;
    moeda1 = n / 1;
    n = n % 1;
    moeda05
    



    printf("Pièces de 100 %d, Pièces de 50 %d \n, Pièces de 20 %d \n, Pièces de 10 %d \n, Pièces de 5 %d \n, Monnaies de 1 %d \n", nota100, nota50, nota20, nota10);

}