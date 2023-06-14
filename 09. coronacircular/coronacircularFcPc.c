#include <stdio.h>
#include <math.h>
float area (int radio_R, int radio_r1);
float perimetro (int radio_R, int radio_r1);
 
void main ()
{
int R, r1;
float X, L, PI=3.14;
R = r1 = 0;
X = L = PI = 0.0;
printf("Calcular el área y perímetro de una corona circular \n"); 
printf("Ingresa el R de la corona circular \n");
scanf("%i", &R);
printf("Ingresa el r1 de la corona circular \n");
scanf("%i", &r1);
X = area(R, r1);
L = perimetro(R, r1);
printf("El area de la corona circular es %f \n", X);
printf("El perímetro de la corona circular es %f \n", L);
getch(); 
}

float area(int radio_R, int radio_r1)
{
float calcula;
calcula = 3.14*((pow(radio_R,2))-(pow(radio_r1,2)));
return calcula;
}
float perimetro(int radio_R, int radio_r1)
{
float calcula;
calcula = 2*3.14*(radio_R+radio_r1);
return calcula;
}


