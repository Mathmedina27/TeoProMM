/**
 * @file Eje9For.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-02
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

    cout << "Ingrese el numero del cual desea saber la cantidad de digitos: ";
    cin >> numero;
 
    for (int i = numero; i != 0; i /= 10) {
        contador++;
    }
    cout<< "El numero "<<numero<<" tiene "<<contador<<" digito(s)"<<endl;

    return 0;
}
