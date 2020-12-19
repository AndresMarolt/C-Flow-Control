// Determinar si hay enteros de 3 cifras cuyo valor sea igual
// al producto de cada una de las mismas.

#include <stdio.h>

main()
{
    int i, c1, c2, c3, producto;

    for(i=100; i<1000; i++){

        c3 = i%10;                      // El resto de num/10 (por ejemplo en 152 sería 2)
        c2 = i/10-(10*(i/100));         // 152/10-(10*(152/100)) = 15 - (10*
        c1 = i/100;

        producto = c1 * c2 * c3;

        if(i==producto)
            printf("%d", i);

        //printf("\n\n c1: %d\n c2: %d\n c3: %d\n\t producto:%d", c1, c2, c3, producto);
        }





}
