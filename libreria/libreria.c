
#include <stdio.h>

void main ()
{
int X; 
float PAG;
X = 0;
PAG = 0.0;
printf("Calcula el valor de una cantidad de lapices \n");
printf("Ingrese cantidad de Lapices \n");
scanf("%i", &X);

if (X < 1000)
{
    PAG = (X*1390);
    printf("El valor de %i lapices es %0.0f pesos\n", X, PAG);
} 
else if ((X >=1000) && (X < 2000))
{
    PAG = (X*990);
    printf("El valor de %i lapices es %0.0f pesos\n", X, PAG);
}
else
{
    printf("Valores invalidos");
}
getch();
}