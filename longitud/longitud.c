
#include <stdio.h>

void main()
{        
    float M, mm, cm, dm, DM, HM, KM;
    printf("Conversor de unidad de longitud en metros a mm,cm,dm,DM,HM,KM \n");
    printf("Ingrese medida en metros \n");
    scanf ("%f", &M);
    mm = M*1000;
    cm = M*100;
    dm = M*10;
    DM = M/10;
    HM = M/100;
    KM = M/1000;
    printf("La longitud de metros a milimetros es %f \n", mm);
    printf("La longitud de metros a centimetros es %f \n", cm);
    printf("La longitud de metros a decimetros es %f \n", dm);
    printf("La longitud de metros a decametros es %f \n", DM);
    printf("La longitud de metros a hectometros es %f \n", HM);
    printf("La longitud de metros a kilometros es %f \n", KM); 
    getchar();
}