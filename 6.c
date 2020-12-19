// Determinar si un número entero positivo ingresado por teclado es o no un número perfecto.
// Los números perfectos son aquellos cuyo valor es igual a la suma de todos sus divisores exactos
// con excepción del mismo número, por ejemplo 6 = 1+2+3

#include <stdio.h>

main()
{
    int NUM, I, ACUM=0;

    printf("Ingrese un numero entero positivo para saber si es un numero perfecto: ");
    scanf("%d", &NUM);

    for(I=1; I<NUM; I++){
        if(NUM%I==0)
            ACUM=ACUM+I;}
    if(NUM==ACUM)
        printf("%d es un numero perfecto.", NUM);
    else
        printf("%d no es un numero perfecto.", NUM);
}
