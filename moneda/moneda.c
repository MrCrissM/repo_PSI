
#include <stdio.h>

void main()
{
    
    int CLP;
    float USD, EUR, ARS, BRL, TCusd, TCeur, TCars, TCbrl;
    printf("Conversor de CLP a USD, EUR, ARS, BRL \n");
    printf("Ingrese valor de CLP \n");
    scanf ("%i", &CLP);
    printf("Ingrese valor de TCusd \n");
    scanf ("%f", &TCusd);
    printf("Ingrese valor de TCeur \n");
    scanf ("%f", &TCeur);
    printf("Ingrese valor de TCars \n");
    scanf ("%f", &TCars);
    printf("Ingrese valor de TCbrl \n");
    scanf ("%f", &TCbrl);
    USD = CLP/TCusd;
    EUR = CLP/TCeur;
    ARS = CLP/TCars;
    BRL = CLP/TCbrl;
    printf("%i CLP en %f USD \n", CLP,USD);
    printf("%i CLP en %f EUR \n", CLP,EUR);
    printf("%i CLP en %f ARS \n", CLP,ARS);
    printf("%i CLP en %f BRL \n", CLP,BRL);  
    getch();

}