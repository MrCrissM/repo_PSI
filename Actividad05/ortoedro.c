
//Prueba de rama
#include <stdio.h>
#include <math.h>

int area (int lado_a, int lado_b, int lado_c);
int volumen (int lado_a, int lado_b, int lado_c);
float diagonal(int lado_a, int lado_b, int lado_c);

void main ()
{
int a, b, c;
float D, X, V;
a=b=c=0;
D=X=V=0.0;
printf ("Calcula el área, diagonal y volumen de un ortoedro \n");
printf ("Ingresa el lado a \n");
scanf ("%i",&a);
printf ("Ingresa el lado b \n");
scanf ("%i",&b);
printf ("Ingresa el lado c \n");
scanf ("%i",&c);
X = area(a,b,c);
V = volumen(a,b,c);
D = diagonal(a,b,c);
printf("El area del Ortoedro es %f \n", X);
printf("La diagonal del Ortoedro es %f \n", D);
printf("El volumen del Ortoedro es %f \n", V);
getch();
}

int area (int lado_a, int lado_b, int lado_c)
{
int calcula;
calcula = 2*((lado_a*lado_b)+(lado_a*lado_c)+(lado_b*lado_c));
return  calcula;
}
int volumen (int lado_a, int lado_b, int lado_c)
{
int calcula;
calcula = lado_a * lado_b * lado_c;
return  calcula;
}
float diagonal (int lado_a, int lado_b, int lado_c)
{
float calcula;
calcula = sqrt(pow(lado_a,2) + pow(lado_b,2) + pow(lado_c,2));
return calcula;
}


