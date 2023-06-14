#include <stdio.h>

void main()
{   
    int M3;
    float mm3, cm3, dm3, DM3, HM3, KM3;
    printf("Conversor unidad de volumen en metros cubicos a mm3,cm3,dm3,DM3,HM3,KM3 \n");
    printf("Ingrese medida en metros \n");
    scanf ("%i", &M3);
    if ((M3>0)&&(M3<1000))
    {
    dm3 = M3*1000;
    cm3 = dm3*1000;
    mm3 = cm3*1000;
    DM3 = M3/1000;
    HM3 = DM3/1000;
    KM3 = HM3/1000;
    printf("La conversion de metros3 a milimetro3 es %f \n", mm3);
    printf("La conversion de metros3 a centimerto3 es %f \n", cm3);
    printf("La conversion de metros3 a decimetro3 es %f \n", dm3);
    printf("La conversion de metros3 a decametro3 es %f \n", DM3);
    printf("La conversion de metros3 a hectometro3 es %f \n", HM3);
    printf("La conversion de metros3 a kilometro3 es %f \n", KM3); 
    }
    else
    {
        printf("Valores invalidos");
    }
    getchar();
}