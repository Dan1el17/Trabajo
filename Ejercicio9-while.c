#include <stdio.h>

int main() {
    long long numero, contador = 0; // Definimos variables

    printf("Contar el numero de digitos de un número\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%lld", &numero); // Almacena el numero en la varible

    // Bucle 
    while (numero != 0) {
        contador++;
        numero /= 10;
    }

    printf("El numero ingresado tiene %d digitos.\n", contador); // Imprimimos el numero de digitos del numero ingresado

    return 0;
}
