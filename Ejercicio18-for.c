#include <stdio.h>

int main() {
    int n, count = 0; // Declaro las variables

    printf("Contar cuantos numeros primos hay desde 1 hasta n\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacena el numero ingresado

    printf("Si n = %d, entonces ", n); 

    // Bucle for para contar los numeros primos
    for (int i = 2; i <= n; ++i) {
        int nPrimo = 1;

        // Verifica si el número es primo
        for (int x = 2; x * x <= i; ++x) {
            if (i % x == 0) {
                nPrimo = 0;
                break; // Cierra el bucle
            }
        }

        if (nPrimo) {
            count++; // Si es primo contador aumenta
            if (count == 1) {
                printf("(%d", i); // Imprime el primer número primo
            } else {
                printf(",%d", i); // Imprime los siguientes numeros primos restantes
            }
        }
    }
    printf(")");
    printf(" hay en total %d numeros primos\n", count); // Imprime cuantos numeros primos hay

    return 0;
}
