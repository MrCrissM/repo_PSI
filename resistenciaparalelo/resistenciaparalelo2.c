#include <stdio.h>

void main()
{
    int Vt,R1,R2,R3,V1,V2,V3;
    float Rt,It,I1,I2,I3,I;
    printf("Calcular en un circutio paralelo Resistencia Total, Intensidad total, intensidad 1, intensidad 2, intensidad 3, intensidad \n");
    printf("Calcular en un circutio paralelo Voltaje 1, 2 y 3 \n");
    printf("Ingrese Voltaje Total \n");
    scanf ("%i", &Vt);
    printf("Ingrese Resistencia 1 \n");
    scanf ("%i", &R1);
    printf("Ingrese Resistencia 2 \n");
    scanf ("%i", &R2);  
    printf("Ingrese Resistencia 3 \n");
    scanf ("%i", &R3);  
    Vt = V1+V2+V3;
    Rt = ((R1*R2*R3))/((R2*R3)+(R1*R3)+(R1*R2));
    It = Vt/Rt;
    I1 = Vt/R1;
    I2 = Vt/R2;
    I3 = Vt/R3;
    I=I1+I2+I3;
    V1=R1*I1;
    V2=R2*I2;
    V3=R3*I3;
    printf("La resistencia total es %f\n", Rt);
    printf("La Intensidad total es %f\n", It);
    printf("El Intensidad 1 es %f\n", I1);
    printf("El Intensidad 2 es %f\n", I2);
    printf("El Intensidad 3 es %f\n", I3);
    printf("El Intensidad es %f\n", I);
    printf("El voltaje 1 es %i\n", V1);
    printf("El voltaje 2 es %i\n", V2);
    printf("El voltaje 3 es %i\n", V3);
    printf("El voltaje total es %i\n", Vt);
    getch();

}