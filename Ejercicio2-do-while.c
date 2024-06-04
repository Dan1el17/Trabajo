#include <stdio.h>

int main() {
    long numero, invertido = 0; // Defino variables
    printf("Dado un numero presentar su inverso\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedir al usuario que ingrese un numero 
    scanf("%ld", &numero); 

    // Bucle 
    do {
        int i = numero % 10; 
        invertido = invertido * 10 + i;
        numero /= 10;
    } while (numero != 0);

    printf("El numero invertido es: %ld\n", invertido); // Presento la serie 
    return 0;
}

