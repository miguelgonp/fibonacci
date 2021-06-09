#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num = 1;
    int max = 10;
    int numero1 = 0;
    int numero2 = 1;
    int resultado = 0;
    
    printf("DO 0 AO 100 fibonacci \n");
    num = 1;
    while( num <= max)
    { 
    resultado = numero2 + numero1;
    numero1 = numero2;
    numero2 = resultado;
    
    printf("%d \n", resultado);
    
    num = num +1;
    }
    return 0;
}
