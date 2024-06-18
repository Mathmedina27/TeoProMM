#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void validar(char num[]) {
    for (int i = 0; i < strlen(num); i++) {
        if (!isdigit(num[i]) && num[i] != '-' && num[i] != '.') {
            printf("Ingrese un numero valido: ");
            scanf("%s", num); // Permite al usuario ingresar un nuevo valor
            validar(num); // Llama a la función de validación nuevamente
            return;
        }
    }
}

int main() {
    char a[256];
    printf("Ingresa un numero: ");
    scanf("%s", a);
    validar(a);
    
    // Convierte la cadena a un número
    double numero = atof(a);
    double n2= 1;
    double sumar;
    sumar= numero + n2;
    
    printf("la suma es: %lf", sumar);
    return 0;
}
