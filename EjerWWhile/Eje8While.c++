/**
 * @file Eje8While.c++
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
    int limite, contador = 0;
    int producto = 1;
    cout << "Ingrese el límite de la secuencia: ";
    cin >> limite;

    int i = 2;
    while (contador < limite){
        if (i % 2 == 0){
            cout << i << " * ";
            producto *= i;
            contador++;
        }
        i++;
    }

    cout << "\nEl producto de los términos es: " << producto << endl;

    return 0;
}
