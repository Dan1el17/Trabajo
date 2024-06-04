#include <stdio.h>

int main() {
    int n, n1 = 0; // Declaración de variables

    printf("Calcular el n-esimo numero triangular\n"); // Descripción del programa
    printf("Ingrese un numero: "); // Solicita al usuario ingresar un número
    scanf("%d", &n); // Almacena el número ingresado

    printf("Si n = %d, el numero triangular es ", n);

    int i = 1; // Contador
    // Bucle do while para calcular el enésimo número triangular
    do { 
        n1 += i; // Suma los números
        printf("%d", i); // Imprime la serie

        if (i != n) {
            printf(" + "); // Agrega el signo de la suma
        }

        i++; // Incrementa el contador
    } while (i <= n);

    printf(" = %d\n", n1); // Imprime el resultado

    return 0;
}
