#include <stdio.h>

int main() {
    int b1, e1, i = 0; // Defino variables
    long resultado = 1;

    printf("Calcular la potencia de un número utilizando sumas sucesivas.\n"); // Programa que se va a realizar
    printf("Ingrese la base: "); // Pedir al usuario que ingrese la base
    scanf("%d", &b1); // Almacenar la base ingresada
    printf("Ingrese el exponente: "); // Pedir al usuario que ingrese el exponente
    scanf("%d", &e1); // Almacenar el exponente ingresado

    // Imprimimos la secuencia
    printf("%d ^ %d = ", b1, e1);
    
    // Bucle 
    while (i < e1) {
        resultado *= b1; // Multiplicamos el resultado por la base
        printf("%d", b1);

        if (i != e1 - 1)
            printf(" * ");

        i++;
    }

    printf(" = %ld\n", resultado); // Presenta el resultado

    return 0;
}
