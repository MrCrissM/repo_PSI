
#include <stdio.h>

void main()
{   
    int G;
    float mg, cg, dg, DG, HG, KG;
    G=0;
    printf("Conversor de unidad de medida de masa a mg,cg,dg,DG,HG,KG \n");
    printf("Ingrese medida en gramos \n");
    scanf ("%i", &G);
    if ((G>0) && (G<1000))
    {
    mg = G*1000;
    cg = G*100;
    dg = G*10;
    DG = G/10;
    HG = G/100;
    KG = G/1000;
    printf("La medida de gramos a miligramos es %f \n", mg);
    printf("La medida de gramos a centigramos es %f \n", cg);
    printf("La medida de gramos a decigramos es %f \n", dg);
    printf("La medida de gramos a decagramos es %f \n", DG);
    printf("La medida de gramos a hectogramos es %f \n", HG);
    printf("La medida de gramos a kilogramos es %f \n", KG); 
    }
    else
    {
        printf("Valores Invalidos");
    }
    getchar();
}