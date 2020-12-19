// Se ingresarán números enteros hasta que se ingrese el 235.
// Indicar cuántas veces ocurrió el ingreso del número 23.

#include <stdio.h>

int main()
{
    int A, CONT=0;

    printf("Ingresar números enteros:\n\n");
    scanf("%d", &A);

    while(A!=235){
        if(A==23){
            ++CONT;}
        scanf("%d", &A);
    }
    printf("\n\nEl numero 23 fue ingresado %d veces.", CONT);
}
