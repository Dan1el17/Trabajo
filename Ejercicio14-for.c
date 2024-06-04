#include <stdio.h>

int main() {
    int n; // Declaro variable
    printf("Calcular la suma de los cuadrados de los primeros n numeros naturales\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacena el número ingresado 

    int suma = 0; // Contador
    printf("Si n = %d, la suma es = ", n); // Imprime la descripcion

    // Bucle para calcular la suma de los cuadrados
    for (int i = 1; i <= n; ++i) {
        suma += i * i; // Agrega el cuadrado del número actual a la suma
        printf("%d^2", i); // Imprime el cuadrado 

        if (i != n) {
            printf(" + "); // Agrega el signo de la suma 
        }
    }

    printf(" = %d\n", suma);// Imprime el resultado de la suma

    return 0;
}
