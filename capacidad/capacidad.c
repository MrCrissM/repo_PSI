
#include<stdio.h>
void main()
{        
    int L;
    float ml, cl, dl, DL, HL, KL;
    printf("Conversor de unidad de capacidad en litros a ml,cl,dl,DL,HL,KL \n");
    printf("Ingrese medida en litros \n");
    scanf ("%i",&L);
    if ((L>0)&&(L<1000))
    {
    ml = L*1000;
    cl = L*100;
    dl = L*10;
    DL = L/10;
    HL = L/100;
    KL = L/1000;
    printf("La capacidad de litros a mililitros es %f \n", ml);
    printf("La capacidad de litros a centilitros es %f \n", cl);
    printf("La capacidad de litros a decilitros es %f \n", dl);
    printf("La capacidad de litros a decalitros es %f \n", DL);
    printf("La capacidad de litros a hectolitros es %f \n", HL);
    printf("La capacidad de litros a kilolitros es %f \n", KL); 
    }
    else
    {
        printf("Valores invalidos");
    }
    getch();
}