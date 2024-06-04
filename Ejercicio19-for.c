#include <stdio.h>

int main() {
    int n, n1 = 0; // Declaración de variables

    printf("Calcular el n-esimo numero triangular\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacena el número ingresado

    printf("Si n = %d, el numero triangular es ", n);

    // Bucle for para calcular el enésimo número triangular
    for (int i = 1; i <= n; ++i) {
        n1 += i; // Suma los números
        printf("%d", i); // Imprime la serie

        if (i != n) {
            printf(" + "); // Agrega el signo de la suma
        }
    }

    printf(" = %d\n", n1); // Imprime el resultado

    return 0;
}
