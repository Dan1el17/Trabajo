#include <stdio.h>

int main() {
    int n;
    printf("Calcular la suma de todos los numeros impares desde 1 hasta n\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacenamos el numero ingresado

    int suma = 0;
    printf("Si n = %d, la suma de los numeros impares es = ", n); // Imprime el inicio de la expresion
    
    // Bucle para sumar los numeros impares
    int i = 1;
    do {
        suma += i;
        printf("%d", i); // Imprime los numeros de la serie 
        if (i != n - 1 && i != n) {
            printf(" + "); // Agrega el signo de la suma
        }
        i += 2; // Saltar al siguiente número impar
    } while (i <= n);

    printf(" = %d\n", suma); // Imprime el resultado

    return 0;
}
