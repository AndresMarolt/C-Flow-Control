// Repetir el problema anterior permitiendo s�lo 3 intentos.
// Luego del tercer intento fallido colocar una advertencia.

#include <stdio.h>

main()
{
    int CLAVE, INTENTOS=1;
    printf("Ingrese la clave numerica: ");
    scanf("%d", &CLAVE);
    while(CLAVE!=23645 && INTENTOS<3){                                                    // CON WHILE
        ++INTENTOS;
        printf("Contrase�a incorrecta. Intente nuevamente: ");
        scanf("%d", &CLAVE);}
    if(CLAVE==23645)
        printf("Clave correcta.");
    if (INTENTOS>=3)
        printf("Alcanzo el numero maximo de intentos");

}
