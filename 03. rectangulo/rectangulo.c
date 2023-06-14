#include <stdio.h>
#include <math.h>

void main()
{        
    float a, p, h, B, D;
    printf("Calcular area, perimetro y diagonal de un rectangulo \n");
    printf("Ingresa la altura del rectangulo\n");
    scanf ("%f", &h);
    printf("Ingresa la base del rectangulo\n");
    scanf ("%f", &B);
    a = B*h;
    p = (2*B)+(2*h);
    D = sqrt((pow(h,2)+pow(B,2)));
    printf("El area del rectangulo es %f \n", a);
    printf("El perimetro del rectangulo es %f \n", p);
    printf("La diagonal del rectangulo es %f \n", D);
    printf("La raiz cuadrada de la altura es %f \n",sqrt(h));
    printf("La raiz cuadrada de la base es %f \n",sqrt(B));
    getch();
}