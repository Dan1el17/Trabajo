#include <stdio.h>

int main() {
    int numero, nPrimo = 1; // Definimos variables

    printf("Determinar si un número es primo\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &numero); // Almacenamos el numero ingresado

    if (numero <= 1) 
        nPrimo = 0; 
    else {
        for (int i = 2; i * i <= numero && nPrimo; ++i) {
            if (numero % i == 0) {
                nPrimo = 0; 
            }
        }
    }

    // Imprimimos si el numero ingresado es primo o no 
    if (nPrimo) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}
