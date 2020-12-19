//Simular el tiro de una moneda para 1, 10, 100, 1000 y 10000 intentos. Mostrar el porcentaje de ocurrencia de cara y seca.
// Para obtener este programa necesitará obtener números aleatorios, que permiten simular el arroje de la moneda.
// En la biblioteca estándar de C existe la función rand(), que devuelve un número pseudoaleatorio.
// Este número se obtiene por un algoritmo específico, que devuelve números que PARECEN no seguir ninguna serie,
// por lo que se pueden utilizar como pseudoaleatorios.
// Además se precisa inicializar la secuencia partiendo de un valor que cambie cada vez
// (el inicio de la secuencia se denomina "semilla" o "seed" - srand() ) u obtendremos siempre la misma secuencia.

#include <stdio.h>
#include <stdlib.h>

main()
{
    int azar, cara=0, ceca=0;
    int i;

    srand(time(0));

    azar = rand()%2;
    if(azar==0)
        cara++;
    else
        ceca++;

    printf("Se tiro la moneda 1 vez:\n");
    printf("Cara salio el %d%% de las veces.\n", cara*100);
    printf("Ceca salio el %d%% de las veces.\n\n\n", ceca*100);


    //-----------------------------------------------------------//

    cara=0;
    ceca=0;

    srand(time(0));  // El argumento de esta función espera un número de partida con el cual sacar un número random.
                     // A mismo argumento mismo número random.
                     // Por ende si aplicamos el argumento (time(0)) el argumento será la cantidad de segundos del reloj de la computadora,
                     //  el cual cambia siempre.

    for(i=0; i<10; i++){
        azar = rand() % 2;    //Dividiendo por dos el resto puede ser solo de dos maneras: 0 ("Cara") o 1 ("Seca")
        if(azar==0)
            cara++;
        else
            ceca++;
    }

    printf("Se tiro la moneda 10 veces:\n");
    printf("Cara salio el %.2f%% de las veces.\n", cara*10.0);
    printf("Ceca salio el %.2f%% de las veces.\n\n\n", ceca*10.0);

    //-----------------------------------------------------------//

    cara=0;
    ceca=0;

    srand(time(0));  // El argumento de esta función espera un número de partida con el cual sacar un número random.
                     // A mismo argumento mismo número random.
                     // Por ende si aplicamos el argumento (time(0)) el argumento será la cantidad de segundos del reloj de la computadora,
                     //  el cual cambia siempre.

    for(i=0; i<100; i++){
        azar = rand() % 2;    //Dividiendo por dos el resto puede ser solo de dos maneras: 0 ("Cara") o 1 ("Seca")
        if(azar==0)
            cara++;
        else
            ceca++;
    }

    printf("Se tiro la moneda 100 veces:\n");
    printf("Cara salio el %d%% de las veces.\n", cara);
    printf("Ceca salio el %d%% de las veces.\n\n\n", ceca);

    //--------------------------------------------------------------------//

    cara=0;
    ceca=0;

    srand(time(0));



    for(i=0; i<1000; i++){
        azar = rand()%2;
        if(azar==0)
            cara++;
        else
            ceca++;
    }

    printf("Se tiro la moneda 1000 veces:\n");
    printf("Cara salio el %.2f%% de las veces.\n", cara/1000.0*100);             //El decimal en el 1000.0 convierte al resultado en float (Casteo con la coma)
    printf("Ceca salio el %.2f%% de las veces.\n\n", ceca/1000.0*100);

    //-------------------------------------------------------------------//
}
