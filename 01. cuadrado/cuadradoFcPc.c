#include <stdio.h>
#include <math.h>

int area(int lado_a);
int perimetro(int lado_a);
float diagonal(int lado_a);

void main ()
{
int a, X, L;
float d;
a, X, L = 0;
d = 0.0;
printf("Calcular área, perímetro y diagonal de un cuadrado \n");
printf("Ingresa el valor de un lado o cateto \n");
scanf("%i", &a);
X = area(a);
L = perimetro(a);
d = diagonal(a);
printf("El valor de área del cuadrado de lado %i es %i \n", a, X);
printf("El valor de perímetro del cuadrado de lado %i es %i \n", a, L);
printf("El valor de la diagonal del cuadrado de lado %i es %f \n", a, d);
getch();
}


int area (int lado_a)
{
int calcula;
calcula = pow(lado_a, 2);
return  calcula;
}
int perimetro(int lado_a)
{
int calcula;
calcula = (lado_a*4);
return  calcula;
}
float diagonal(int lado_a)
{
float calcula;
calcula = lado_a*sqrt(2);
return calcula;
}
