#include <stdio.h>

int main() {
    long numero, invertido = 0; // Defino variables
    printf("Dado un numero presentar su inverso\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedir al usuario que ingrese un numero 
    scanf("%ld", &numero); 

    // Bucle
    for (; numero != 0; numero /= 10) {
        int i = numero % 10; 
        invertido = invertido * 10 + i; 
    }

    printf("El numero invertido es: %ld\n", invertido); // Presento la serie 
    return 0;
}

