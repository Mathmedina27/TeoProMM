/**
 * @file Eje9Wdw.c++
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
    int numero;
    int contador = 0;

    cout << "Ingrese el número del cual desea saber la cantidad de dígitos: ";
    cin >> numero;

    do {
        contador++;
        numero /= 10;
    } while (numero != 0);

    cout << "El número tiene " << contador << " dígito(s)" << endl;

    return 0;
}
