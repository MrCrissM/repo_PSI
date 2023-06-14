
#include <stdio.h>

void main()
{
    
    int Vt,R1,R2,R3;
    float Rt,I,V1,V2,V3;
    printf("Calcular en un circutio serie Resistencia Total \n");
    printf("Calcular en un circutio serie Intensidad \n");
    printf("Calcular en un circutio serie Voltaje 1 \n");
    printf("Calcular en un circutio serie Voltaje 2 \n");
    printf("Calcular en un circutio serie Voltaje 3 \n");
    printf("Ingrese Voltaje Total \n");
    scanf ("%i", &Vt);
    printf("Ingrese Resistencia 1 \n");
    scanf ("%i", &R1);
    printf("Ingrese Resistencia 2 \n");
    scanf ("%i", &R2);  
    printf("Ingrese Resistencia 3 \n");
    scanf ("%i", &R3);      
    //Vt = V1+V2+V3;
    Rt = R1+R2+R3;
    I = Vt/Rt;
    V1 = R1*I;
    V2 = R2*I;
    V3 = R3*I;
    //printf("El voltaje total es %f\n", Vt);
    printf("La resistencia total es %f\n", Rt);
    printf("La Intensidad es %f\n", I);
    printf("El voltaje 1 es %f\n", V1);
    printf("El voltaje 2 es %f\n", V2);
    printf("El voltaje 3 es %f\n", V3);
    getch();

}