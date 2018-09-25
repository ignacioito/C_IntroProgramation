//
//Auteur Ignacio Ito
//
// Revision

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	int n, i = 1, c;
	printf("_______TabuadA_______\n");
	printf("Disez le nombre: \n");
	scanf(" %d", &n);
	while(i <= 10){
		int c = (n * i);
		printf("%d * %d = %d\n", n, i, c);
		i++;
	}
	return 0;
}