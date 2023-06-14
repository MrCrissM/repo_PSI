
#include <stdio.h>

void main()
{
    int A,B,C,D,E,R;
    printf("Calcula la resta de cinco numeros enteros \n");
    printf("Ingresa el numero A \n");
    scanf("%i",&A);
    printf("Ingresa el numero B \n");
    scanf("%i",&B);
    printf("Ingresa el numero C \n");
    scanf("%i",&C);
    printf("Ingresa el numero D \n");
    scanf("%i",&D);
    printf("Ingresa el numero E \n");
    scanf("%i",&E);
    R=A-B-C-D-E;
    printf("La resta de los cinco numeros es %i \n", R);
    getch();
}