#include <stdio.h>

int main() {
    int n, count = 0; // Declaro las variables

    printf("Contar cuantos numeros primos hay desde 1 hasta n\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacena el numero ingresado

    printf("Si n = %d, entonces ", n); 

    int i = 2; // Variable
    while (i <= n) { // Bucle while para contar los numeros primos
        int nPrimo = 1;

        // Verifica si el número es primo
        int x = 2; // Variable
        while (x * x <= i) {
            if (i % x == 0) {
                nPrimo = 0;
                break; // Cierra el bucle
            }
            x++; // Incrementa el contador
        }

        if (nPrimo) {
            count++; // Si es primo incrementa el contador
            if (count == 1) {
                printf("(%d", i); // Imprime el primer número primo
            } else {
                printf(",%d", i); // Imprime los siguientes números primos restantes
            }
        }
        i++;
    }
    printf(")");
    printf(" hay en total %d numeros primos\n", count); // Imprime cuantos números primos hay

    return 0;
}
