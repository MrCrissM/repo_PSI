#include <stdio.h>

void main()
{        
    int p,l1,l2,b,h;
    float a;
    printf("Calcular area y perimetro de un triangulo \n");
    printf("Ingresa el lado uno del triangulo \n");
    scanf ("%i", &l1);
    printf("Ingresa el lado dos del triangulo \n");
    scanf ("%i", &l2);
    printf("Ingresa la base del triangulo \n");
    scanf ("%i", &b);
    printf("Ingresa altura del triangulo \n");
    scanf ("%i", &h);
    a = (b*h)/2;
    p = l1+l2+b;
    printf("El area del triangulo es %f \n", a);
    printf("El perimetro del triangulo es %i \n", p);
    getch();
}