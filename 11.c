// Ingresar 10 valores por teclado. Indicar si esta secuencia es creciente
// (todo valor es mayor que el anterior)

#include <stdio.h>

main()
{
    int i, flag=0;
    float A, B=0;

    printf("Ingrese 10 valores:\n");

    for(i=0; i<10; i++){
        scanf("%f", &A);
        if(flag!=1 && A<B){
            flag=1;}
        B=A;
        }
    if(flag==1){
        printf("La secuencia no es creciente.");}
    else{
        printf("La secuencia es creciente.");}
}
