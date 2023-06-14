
#include <stdio.h>

void main()
{
    
    float pH, pM;
    int H, M, T;
    printf("Calcula porcentaje por genero de un curso \n");
    printf("Ingrese numero de hombres \n");
    scanf ("%i", &H);
    printf("Ingrese numero de mujeres \n");
    scanf ("%i", &M);
    T = H+M;
    pH = H*100/T;
    pM = M*100/T;
    printf("El porcentaje de hombres es %0.2f \n", pH);
    printf("El porcentaje de mujeres es %0.2f \n", pM);
    getch();

}