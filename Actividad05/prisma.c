#include <stdio.h>
#include <math.h>

int perimetro (int lado_l);
float areabase (int perimetro_p, int apotema_a);
int area (int perimetro_p, int altura_h, int apotema_a);
float volumen(float areabase_ab, int altura_h);

void main ()
{
int l, h, a, P;
float Ab, X, V;
l=h=a=P= 0;
Ab=X=V=0.0;
printf ("Calcula el área y volumen de un prisma pentagonal \n");
printf ("Ingresa valor del lado \n");
scanf ("%i",&l);
printf ("Ingresa valor de la altura \n");
scanf ("%i",&h);
printf ("Ingresa valor de la apotema \n");
scanf ("%i",&a);
P = perimetro(l);
Ab = areabase(P,a);
X = area(P,h,a);
V = volumen(Ab,h);
printf("El perimetro del Prisma es %i \n", P);
printf("El area del Prisma es %f \n", X);
printf("El volumen del Prisma es %f \n", V);
getch();
}

int perimetro (int lado_l)
{
int calcula;
calcula = lado_l*5;
return calcula;
}
float areabase (int perimetro_p, int apotema_a)
{
float calcula;
calcula = (perimetro_p*apotema_a)/2;
return calcula;
}
int area (int perimetro_p, int altura_h, int apotema_a)
{
int calcula;
calcula = perimetro_p*(altura_h+apotema_a);
return calcula;
}
float volumen (float areabase_ab, int altura_h)
{
float calcula;
calcula = areabase_ab*altura_h;
return calcula;
}

