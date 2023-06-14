#include <stdio.h>

void main()
{
    
    int Vt,R1,R2,R3;
    float Rt,It,I1,I2,I3,I,V1,V2,V3,V;
    printf("Calcular en un circutio paralelo Resistencia Total \n");
    printf("Calcular en un circutio paralelo Intensidad total \n");
    printf("Calcular en un circutio paralelo Intensidad 1 \n");
    printf("Calcular en un circutio paralelo Intensidad 2 \n");
    printf("Calcular en un circutio paralelo Intensidad 3 \n");
    printf("Calcular en un circutio paralelo Intensidad \n");  
    printf("Calcular en un circutio paralelo Voltaje 1 \n");
    printf("Calcular en un circutio paralelo Voltaje 2 \n");
    printf("Calcular en un circutio paralelo Voltaje 3 \n");
    printf("Ingrese Voltaje Total \n");
    scanf ("%i", &Vt);
    printf("Ingrese Resistencia 1 \n");
    scanf ("%i", &R1);
    printf("Ingrese Resistencia 2 \n");
    scanf ("%i", &R2);  
    printf("Ingrese Resistencia 3 \n");
    scanf ("%i", &R3);   
    if((Vt>0)&&(Vt<15)&&(R1>0)&&(R1<15)&&(R2>0)&&(R2<15)&&(R3>0)&&(R3<15))
    {   
    Rt = (R1*R2*R3)/((R2*R3)+(R1*R3)+(R1*R2));
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
    printf("El voltaje 1 es %f\n", V1);
    printf("El voltaje 2 es %f\n", V2);
    printf("El voltaje 3 es %f\n", V3);
    printf("El voltaje total es %i\n", Vt);
    }
    else
    {
        printf("Valores invalidos");
    }
    getch();

}