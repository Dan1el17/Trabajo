#include <stdio.h>

int main() {
    int numero, diferencia, n1, suma = 0; // Definimos variables

    printf("Calcular la suma de los primeros n terminos de una serie aritmética.\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &numero); // Almacena el numero

    printf("Ingrese la diferencia entre los terminos consecutivos: "); // Pedimos que ingrese la diferencia
    scanf("%d", &diferencia); // Almacena la diferencia

    printf("Ingrese la cantidad de terminos a sumar: "); // Pedimos que ingrese cuantos numeros quiere sumar
    scanf("%d", &n1); // Almacena la cantidad de términos

    printf("Serie: ");
    //Bucle

    for (int i = 0; i < n1; ++i) {
        printf("%d", numero + i * diferencia);
        if (i != n1 - 1) {
            printf(" + ");
        } // Fin del si
        suma += numero + i * diferencia;
    }

    printf("\n"); // Espacio para separar
    printf("La suma de los %d terminos de la serie es: %d\n", n1, suma); // Imprime la suma de los términos

    return 0;
}
