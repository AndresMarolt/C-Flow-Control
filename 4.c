// Permitir el ingreso de una clave num�rica entera.
// Finalizar el ingreso solamente cuando la clave ingresada sea 23645.
// PRIMERO LO HICE CON WHILE, M�S ABAJO EST� HECHO CON DO WHILE.


#include <stdio.h>


main()
{
    int CLAVE;
    printf("Ingrese la clave numerica: ");
    scanf("%d", &CLAVE);
    while(CLAVE!=23645){                                                    // CON WHILE
        printf("Contrase�a incorrecta. Intente nuevamente: ");
        scanf("%d", &CLAVE);}
    printf("Contrase�a correcta.");


}


/*{
    int CLAVE;

    do{                                                                     // CON DO WHILE
        printf("Ingrese la clave numerica: ");
        scanf("%d", &CLAVE);
    }
        while(CLAVE!=23645);

    printf("Contrase�a correcta.");

}   */
