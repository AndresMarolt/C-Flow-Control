// Permitir el ingreso de una clave numérica entera.
// Finalizar el ingreso solamente cuando la clave ingresada sea 23645.
// PRIMERO LO HICE CON WHILE, MÁS ABAJO ESTÁ HECHO CON DO WHILE.


#include <stdio.h>


main()
{
    int CLAVE;
    printf("Ingrese la clave numerica: ");
    scanf("%d", &CLAVE);
    while(CLAVE!=23645){                                                    // CON WHILE
        printf("Contraseña incorrecta. Intente nuevamente: ");
        scanf("%d", &CLAVE);}
    printf("Contraseña correcta.");


}


/*{
    int CLAVE;

    do{                                                                     // CON DO WHILE
        printf("Ingrese la clave numerica: ");
        scanf("%d", &CLAVE);
    }
        while(CLAVE!=23645);

    printf("Contraseña correcta.");

}   */
