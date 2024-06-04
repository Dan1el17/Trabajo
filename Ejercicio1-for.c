#include <stdio.h>

int main() {
    long numero; // Defino variable
    int suma = 0, n1[20], cont = 0; // Defino variables

    printf("Ingrese un numero: "); // Pedir al usuario que ingrese un numero 
    scanf("%ld", &numero); // Almacena el numero ingresado

    for (; numero != 0; cont++) {
        n1[cont] = numero % 10; // Obtiene el ultimo digito
        suma += n1[cont]; // Suma el diigito
        numero /= 10; // Elimina el ultimo digito
    }

    // Calcula la suma
    printf("%ld -> ", numero);
    for (int i = cont - 1; i >= 0; i--) {
        printf("%d", n1[i]); // Imprime la secuencia
        if (i != 0) {
            printf(" + "); // Imprime el signo mas
        }
    }
    printf(" = %d\n", suma); // Imprime el resultado

    return 0;
}
