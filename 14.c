// Ingresar los datos de 10 alumnos consistentes en:
// legajo y 8 notas.
// Indicar cuál es el alumno de mejor promedio.

#include <stdio.h>

int main()
{
    char nombre[10];
    int legajo[10], notas[8], i, j;

    for(i=0; i<10; i++){
        printf("Ingrese el nombre del alumno: ");
        scanf("%c", &nombre[i]);
        printf("\nIngrese el numero de legajo: ");
        scanf("%d", &legajo[i]);
        printf("\nIngrese 8 notas del alumno: ");
        for(j=0; j<8; j++){
            scanf("%d", notas[i, j]);
        }
        printf("\n\nNombre del alumno: %c.", nombre[i]);
        printf("\nLegajo: %d.", legajo[i]);
        for(j=0; j<8; j++)
            printf("\nNotas: %d.", notas[i, j]);
    }
}
