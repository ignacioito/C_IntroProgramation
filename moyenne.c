#include <stdio.h>
#include <stdlib.h>
int main()
{
	double chiffre1;
	int chiffre2;
	int chiffre3;
	double chiffre4;
	int age;
	int seconds = 0;


	//printf("\nTapez le première chiffre \n");
	//scanf("%d", &chiffre1);
	//printf("\nTapez le deuxieme chiffre \n");
	//scanf("%d", &chiffre2);
	//printf("\nTapez le troisieme chiffre \n");
	//scanf("%d", &chiffre3);

	//chiffre4 = chiffre1 + chiffre2 + chiffre3;

	//printf("\n La somme c'est %f.\n", chiffre4);
	//printf("\n La moiéne c'est %lf.\n", chiffre4/3);
	//printf("\n La produit c'est %d.\n", chiffre1 * chiffre2 * chiffre3);
	//printf("\n La difference c'est %d.\n", chiffre1 - chiffre2 - chiffre3);

	printf("\nTapez votre age \n");
	scanf("%d", &age);
	printf("\n Dans 5 ans tu va avoir %d.\n", age + 5);
	printf("\n Tu est majeur pendant %d ans.\n", age - 18);

	printf("\nTapez le nombre de seconds \n");
	scanf("%d", &seconds);

	printf("\n%d seconds correspondent a ", seconds);
	printf("%dh", seconds / 3600);
	printf("%dm", seconds % 3600 / 60);
	printf("%ds.\n", seconds % 3600 % 60);



	printf("\nTapez le première chiffre \n");
	scanf("%lf", &chiffre1);
	printf("\nTapez le deuxieme chiffre \n");
	scanf("%d", &chiffre2);
	chiffre1 +=chiffre2;
	printf("\nTapez le troisieme chiffre \n");
	scanf("%d", &chiffre2);
	chiffre1 +=chiffre2;
	printf("\nTapez le quatrieme chiffre \n");
	scanf("%d", &chiffre2);
	chiffre1 +=chiffre2;
	printf("\n La moyenne c'est %lf.\n\n", chiffre1 / 4);

	int grandnombre = 2147483646;
	printf(" %d\n", grandnombre);
	grandnombre++;
	printf(" %d\n", grandnombre);
	grandnombre++;
	printf("%d\n", grandnombre);

	float valeur = 0;
	printf("\nTapez une valeur \n");
	scanf("%f", &valeur);
	int valeur2 = valeur * 100;
	printf("%.2f correspondent a %d *100 Dolares + %d *50 Dolares + %d * 20 Dolares + %d * 10 Dolares + %d * 5 Dolares + %d * 2 Dolares + %d * 1 Dolar + %d * 25c + %d * 10c + %d * 5c + %d * 1c.\n ",
		valeur, valeur2 / 10000, valeur2 % 10000 / 5000, valeur2 % 10000 % 5000 / 2000,
		 valeur2 % 10000 % 5000 % 2000 / 1000, valeur2 % 10000 % 5000 % 2000 % 1000 / 500,
		  valeur2 % 10000 % 5000 % 2000 % 1000 % 500 / 200, valeur2 % 10000 % 5000 % 2000 % 1000 % 500 % 200 / 100,
		   valeur2 % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 / 25, valeur2 % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 25 / 10, 
		    valeur2 % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 25 % 10 / 5, valeur2 % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 25 % 10 % 5);





}