#include <stdio.h>

int main() {
    int numero; // Variable
    long long fac = 1; // Para almacenar un numero grande

    printf("Calcular el factorial de un numero\n"); // Programa que se va a realizar
    printf("Ingrese un numero para calcular su factorial: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &numero); // Almacena el numero 

    printf("%d = ", numero); // Imprimimos el numero que ingreso el usuario 

    int i = numero; // Contador

    // Bucle
    while (i >= 1) {
        fac *= i;
        printf("%d", i);
        if (i != 1) {
            printf(" * ");
        } // Fin del si
        i--;
    }

    printf(" = %llu\n", fac); // Imprimimos la serie

    return 0;
}
