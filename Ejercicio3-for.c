#include <stdio.h>

int main() {
    int b1, e1; // Defino variables
    long resultado = 1; 

    printf("Calcular la potencia de un número utilizando sumas sucesivas.\n"); // Programa que se va a realizar
    printf("Ingrese la base: "); // Pedimo que ingrese la base
    scanf("%d", &b1); //Almacenamos el exponente 
    printf("Ingrese el exponente: "); //Pedimos que ingrese el exponente
    scanf("%d", &e1); // Almacenamos el exponente 

    // Imprimimos la secuencia
    printf("%d ^ %d = ", b1, e1);
    
    //Bucle 
    for (int i = 0; i < e1; i++) {
        resultado *= b1; // Multiplicamos el resultado por la base
        printf("%d", b1);

        if (i != e1 - 1)
            printf(" * ");
    }

    printf(" = %ld\n", resultado); // Presenta el resultado

    return 0;
}

