#include <stdio.h>
#include <math.h>

void main()
{        
    float a, p, l, d;
    printf("Calcular area, perimetro y diagonal de un cuadrado \n");
    printf("Ingresa el lado del cuadrado\n");
    scanf ("%f", &l);
    a = pow(l,2);
    p = 4*l;
    d = l*sqrt(2);
    printf("El area del cuadrado %f es %f \n",l,a);
    printf("El perimetro del cuadrado de lado %f es %f \n",l,p);
    printf("La diagonal del cuadrado de lado %f es %f \n",l,d);
    printf("El lado del cuadrado es %f \n",l);
    printf("La raiz cuadrada de 2 es %f \n",sqrt(2));
    getch();
}