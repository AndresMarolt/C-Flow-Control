// Ingresar por teclado un entero decimal positivo. Mostrarlo en pantalla en binario.

#include <stdio.h>
#include <math.h>

main()
{
    int i, num, bit, potencia=0, contbit;
    long long int bin=0;

    printf("Indique número: ");
    scanf("%d", &num);

    printf("Indique cantidad de bits: ");
    scanf("%d", &bit);

    for(i=0; i<bit; i++){
        if(num%2!=0)
            bin=bin+pow(10, potencia);

        num=num/2;
        potencia++;
    }

    contbit=(log10(bin)+1);
    while(contbit<bit){
        printf("0");
        contbit++;
    }

    printf("%11i", bin);
}
