/********************************************************************************
Question 2

Programmez une fonction qui retourne la médiane entre trois entiers.

La signature de la fonction est : int mediane(int a, int b, int c)

EX : mediane(1, 45, 1) vaut 1
     mediane(5, 4, -11) vaut 4

********************************************************************************/

//

#include<stdio.h>
#include<stdlib.h>

int mediane(int a, int b, int c);
int main(){
	
	int a, b, c;
	printf("Saississez le 1er: \n");
	scanf("%d", &a);

	printf("Saississez le 2ème: \n");
	scanf("%d", &b);

	printf("Saississez le 3ème: \n");
	scanf("%d", &c);

	printf("\n\n");

	printf("Le nombre mediane c'est "); 
	mediane(a, b, c);


}

int mediane(int a, int b, int c){
	if(((a > b)&&(a < c)) || ((a < b) && (a > c))){
		printf("%d\n", a);
	}
	else if(((b > a) && (b < c)) || ((b < a) && (b > c))){
		printf("%d\n", b);
		} 
		else {
		printf("%d\n", c);
		}


}

	
		

	
