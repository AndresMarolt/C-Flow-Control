// Se ingresar�n n�meros enteros hasta que se ingrese el 235.
// Indicar cu�ntas veces ocurri� el ingreso del n�mero 23.

#include <stdio.h>

int main()
{
    int A, CONT=0;

    printf("Ingresar n�meros enteros:\n\n");
    scanf("%d", &A);

    while(A!=235){
        if(A==23){
            ++CONT;}
        scanf("%d", &A);
    }
    printf("\n\nEl numero 23 fue ingresado %d veces.", CONT);
}
