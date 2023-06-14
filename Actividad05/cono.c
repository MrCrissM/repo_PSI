
#include <stdio.h>
#include <math.h>

float radio (int generatriz_g, int altura_h);
float area (float radio_r, int generatriz_g, float PI);
float volumen (float radio_r, int altura_h, float PI);

void main ()
{
int h, g;
float r, X, V, PI;
PI = 3.14;
h=g=0;
r=X=V=0.0;
printf ("Calcula el área y volumen de un cono \n");
printf ("Ingresa el valor de altura \n");
scanf ("%i",&h);
printf ("Ingresa el valor de generatriz \n");
scanf ("%i",&g);
r = radio(g,h);
X = area(r,g,PI);
V = volumen(r,h,PI);

printf("El radio del cono es %f \n", r);
printf("El area del cono es %f \n", X);
printf("El volumen del cono es %f \n", V);
getch();
}

float radio (int generatriz_g, int altura_h)
{
float calcula;
calcula = sqrt(pow(generatriz_g,2)-(pow(altura_h,2)));
return  calcula;
}
float area (float radio_r, int generatriz_g, float PI)
{
float calcula;
calcula = PI*radio_r*(generatriz_g+radio_r);
return  calcula;
}
float volumen (float radio_r, int altura_h, float PI)
{
float calcula;
calcula = (PI*(pow(radio_r,2)*altura_h))/3;
return calcula;
}
