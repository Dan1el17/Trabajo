#include <stdio.h>

int main() {
    int numero;// Variable
    long long fac = 1; // Para almacenar un numero grande

    printf("Calcular el factorial de un numero\n"); // Programa que se va a realizar
    printf("Ingrese un numero para calcular su factorial: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &numero); // Almacena el numero 


    printf("%d = ", numero); //Imprimimos el numero que ingreso el usuario 

    // Bucle
    for (int i = numero; i >= 1; --i) {
        fac *= i;
        printf("%d", i);
        if (i != 1) {
            printf(" * ");
        } // Fin del si
    }

    printf(" = %llu\n", fac); // Imrpimimos la serie

    return 0;
}
