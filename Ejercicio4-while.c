#include <stdio.h>

int main() {
    int numero, raizCubica = 0, i = 1; // Defino la variable
    printf("Calcular la raiz cubica de un numero\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pido que ingrese un numero
    scanf("%d", &numero); // Almaceno el numero

    // Bucle 
    while (i <= numero) {
        int cubo = i * i * i;
        if (cubo <= numero) {
            raizCubica = i;
        } // Cierro el si
        i++;
    }

    printf("La raiz cubica de %d ^ (1/3) = es %d\n", numero, raizCubica); //Presento el resultado

    return 0;
}

