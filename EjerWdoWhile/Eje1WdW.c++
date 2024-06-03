/**
 * @file Eje1WdW.c++
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
    int numero, resultado = 0;
    
    cout << "Ingrese una cantidad: ";
    cin >> numero;
    
    if (numero < 10){
        resultado = numero;
        cout << "El resultado es: " << resultado << endl;
    } else {
        do {
            resultado += numero % 10; 
            numero /= 10; 
        } while (numero > 0);
        cout << "La suma de los dígitos es: " << resultado << endl;
    }
    
    return 0;
}
