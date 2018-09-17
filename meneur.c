/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/*********************************************************************************
Question 1 :

Programmez une fonction qui retourne le minimum entre trois entiers.

La signature de la fonction est : int minimum(int a, int b, int c)

EX : minimum(3, 56, -491) vaut -491

*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int minimum(int a, int b, int c);


int main()
{
    
    int a, b, c;
    
    printf("tapez le premier nombre: \n");
    scanf("%d", &a);
    
    printf("tapez le premier nombre: \n");
    scanf("%d", &b);
    
    printf("tapez le premier nombre: \n");
    scanf("%d", &c);
    
    minimum(a,b,c);

    
    return 0;
}


int minimum(int a, int b, int c){
       
       if ((a<b) && (a<c)){
            printf("a %d", a);
       }
        else if ((b<a) && (b<c)){
            printf("b %d", b);
        }
        else {
            printf("c %d", c);
               
           
       }

}
