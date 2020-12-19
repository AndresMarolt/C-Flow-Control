// Ingresar por teclado un entero decimal positivo. Mostrarlo en pantalla en binario.

#include <stdio.h>

main()
{
    int i, a[10], num;

    printf("Ingrese un entero decimal positivo: ");
    scanf("%d", &num);

    for(i=0; num>0; i++){
    a[i] = num%2;
    num = num/2;
    }

    printf("\n\nLa representacion en forma binaria es ");
    for(i=i-1; i>=0; i--){
        printf("%d", a[i]);
    }



}
