#include <stdio.h>

int main() {
    int numero, n1 = 0, n2 = 1, n3; // Iniciamos la serie de Fibonacci
    printf("Calcular los n numeros de la serie de Fibonacci\n"); // Programa que se va a realizar
    printf("Ingrese el numero de elementos que desea calcular: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &numero); // Almacena el numero 

    // Bucle 
    int i = 0;
    do {
        printf("%d, ", n1); // Imprimimos el elemento actual de la serie
        n3 = n1 + n2; // Calculamos el siguiente número
        n1 = n2; // Actualizamos los valores para el siguiente cálculo
        n2 = n3; // Obtenemos el siguiente numero
        i++;
    } while (i < numero); // Cerramos el bucle

    return 0;
}
