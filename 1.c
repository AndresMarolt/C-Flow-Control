#include <stdio.h>

// Se ingresar�n n�meros enteros positivos.
// Determinar cu�ntos de estos son pares.
// El ingreso finalizar� con un n�mero negativo.

int main()
{
    int NUM, CONT=0;

    printf("Ingrese numeros enteros positivos:\n\n");
    scanf("%d", &NUM);

    while(NUM>=0){

        if(NUM%2==0 && NUM>=0)
            CONT = CONT + 1;
        scanf("%d", &NUM);
    }
    printf("De los numeros ingresados %d son pares.", CONT);
}
