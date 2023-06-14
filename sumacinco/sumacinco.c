#include <stdio.h>

void main()
{
    
    int A,B,C,D,E,R;
    printf("Calcula la suma de A,B,C,D,E \n");
    printf("Ingrese numero A \n");
    scanf ("%i", &A);
    printf("Ingrese numero B \n");
    scanf ("%i", &B);
    printf("Ingrese numero C \n");
    scanf ("%i", &C);
    printf("Ingrese numero D \n");
    scanf ("%i", &D);
    printf("Ingrese numero E \n");
    scanf ("%i", &E);
    R=A+B+C+D+E;
    printf("La suma de A,B,C,D,E es %i\n",R);
    getch();
}