// Mostrar los primeros 5 números perfectos.

#include <stdio.h>
#include <math.h>

main()
{
    int NUM, ACUM=0, DIV=1, BANDERA=0;
    int MERSENNE=1, EXPONENTE=1;

    while(BANDERA<5){
        MERSENNE = pow(2,EXPONENTE);
        NUM = MERSENNE*(MERSENNE-1);
        if(NUM%2==0){
            NUM = NUM/2;
            while(NUM>DIV){
                if(NUM%DIV==0){
                    ACUM+=DIV;
                }
                if(DIV+1==NUM && NUM==ACUM){
                    BANDERA++;
                    printf("\nEl numero perfecto %d es %d\n", BANDERA, NUM);
                }
                DIV++;
                if(ACUM>NUM){
                    DIV=1;
                    ACUM=0;
                    NUM++;
                }
        }
    }
        DIV=1;
        ACUM=0;
        EXPONENTE++;
    }
    return 0;
}
