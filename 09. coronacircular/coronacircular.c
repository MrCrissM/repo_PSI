#include <stdio.h>
#include <math.h>
void main()
{
int R, r1;
float X, L, PI=3.14;   
printf("Calcula el área y perimetro de una corona circular \n");
printf("Ingresa el R de la corona circular \n");
scanf("%i", &R);
printf("Ingresa el r1 de la corona circular \n");
scanf("%i", &r1);
if ((R>0) && (R<11) && (r1>0) && (r1<11))
{
X = 3.14*((pow(R,2))-(pow(r1,2)));
L = 2*3.14*(R+r1);
printf("El area de la corona circular es %f \n", X);
printf("El perimetro de la corona circular es %f \n", L);
}
else
{
printf("Valores inválidos \n");
}
getch();
}
