/**
 * @file Eje3While.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int base, exponente, respuesta = 0, contador;

    cout << "Ingrese la base de la potencia: ";
    cin >> base;
    cout << "Ingrese el exponente de la potencia: ";
    cin >> exponente;
    contador = base;

    int i = 1;
    while (i < exponente){
        int j = base;
        while (j <= contador){
            respuesta += contador;
            cout << respuesta << endl;
            j++;
        }
        contador = respuesta;
        i++;
    }

    cout << "El resultado final es: " << contador << endl;

    return 0;
}
