#include <stdio.h>

int main() {
    int numero, n1, r; // Declaramos variables

    printf("Calcular el producto de los primeros n terminos de una serie geometrica\n"); // Programa que se va a realizar
    printf("Ingrese el primer termino de la serie: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n1); // Almacena el numero al azar

    printf("Ingrese porque numero desea multiplicar la serie : "); // Pedimos ingresar el numero por el que se va a multiplicar
    scanf("%d", &r); // Almacena el numero que se va a multiplicar

    printf("Ingrese la cantidad de terminos a multiplicar: "); // Pedimos que ingrese hasta cuantos numeros quiere multiplicar
    scanf("%d", &numero); // Almacena hasta cuantos numeros queremos multiplicar

    printf("Serie: ");
    
    int termino = n1;
    for (int i = 0; i < numero; ++i) {
        printf("%d", termino); // Imprimime cada término de la serie
        if (i != numero - 1) {
            printf(", "); // Agrega una coma despues de cada numero
        }
        termino *= r; // Calculamos el término actual de la serie
    }

    return 0;
}
