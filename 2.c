//Se ingresarán 100 números enteros. Sumar los de orden impar (1,3,5...) por un lado
// y los de orden par (2,4,6...) por otro. Determinar cuáles proporcionan la mayor suma.

#include <stdio.h>

int main()
{
    int PARES=0, IMPARES=0, I, A;

    printf("Ingrese 100 números enteros: \n");

    for(I=1; I<=100; I++){
        scanf("%d", &A);
        if(I%2==0)
            PARES=PARES+A;
        else
            IMPARES=IMPARES+A;
    }
    if(PARES>IMPARES)
        printf("Los números ingresados en el orden par son mayores que los del orden impar. La suma de estos da %d, mientras que los del orden impar suman %d.", PARES, IMPARES);
    else
        printf("Los números ingresados en el orden impar son mayores que los del orden par. La suma de estos da %d., mientras que los del orden par suman %d.", IMPARES, PARES);

}
