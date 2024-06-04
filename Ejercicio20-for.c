#include <stdio.h>

int main() {
    int n; // Declaración de variables
    long long numero = 1, suma = 0;  // Variables para numeros grandes

    printf("Calcular la suma de los factoriales de los primeros n numeros\n"); // Descripción del programa
    printf("Ingrese un numero: "); // Solicita al usuario ingresar un número
    scanf("%d", &n); // Almacena el número ingresado

    printf("Si n = %d, suma = ", n);

    // Bucle for para calcular la suma de los factoriales
    for (int i = 1; i <= n; ++i) {
        numero *= i; // Calcula el factorial del número actual
        suma += numero; // Suma el factorial al total
        if (i == 1) {
            printf("%d!", i); // Imprime el factorial del primer número
        } else {
            printf(" + %d!", i); // Imprime los otros factoriales con el signo mas
        }
    }

    printf(" = "); // Imprime el signo igual

    numero = 1;
    for (int i = 1; i <= n; ++i) {
        numero *= i; // Calcula el factorial
        printf("%lld", numero); // Imprime el factorial
        if (i != n) {
            printf(" + "); // Imprime el signo de suma
        }
    }

    printf(" = %lld\n", suma); // Imprime la suma de los factoriales

    return 0;
}
