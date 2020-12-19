// Ingresar 10 valores por teclado. Indicar cuál fue el mayor y en qué posición entró.

#include <stdio.h>

main()
{
    int i, pos=0;
    float A, B=0;

    printf("Ingrese 10 valores:\n");

    for(i=0; i<10; i++){
        scanf("%f", &A);
        if(A>B){
            B=A;
            pos=i+1;}
    }
    printf("\n\nEl numero mayor entre los ingresados es %.2f, y entro en la posicion %d", B, pos);
}
