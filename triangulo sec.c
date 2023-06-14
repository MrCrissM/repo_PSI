
#include <stdio.h>

void main()
{
int B, h;
float X;   
printf("Calcula área de un triangulo escaleno \n");
printf("Ingresa la base del triangulo \n");
scanf("%i", &B);
printf("Ingresa la altura del triangulo \n");
scanf("%i", &h);
if ((B>0) && (B<10) && (h>0) && (h<10))
{
X = 0.5*(B*h);
printf("El area del triangulo es %f \n", X);
}
else
{
printf("Valores inválidos \n");
}
getch();
}
