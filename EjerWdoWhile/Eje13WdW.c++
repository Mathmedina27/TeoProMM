/**
 * @file EjeWdW.c++
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
    int limite, contador = 0, sumatoria = 0;
    cout << "Ingrese el límite hasta el que quiere sumar los primeros números impares: ";
    cin >> limite;

    int i = 2;
    do {
        cout << i << " + ";
        sumatoria += i;
        contador++;
        i += 2;
    } while (contador < limite);

    cout << "=" << sumatoria;

    return 0;
}
