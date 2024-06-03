/**
 * @file Eje15While.c++
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
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
    system("@cls||clear");
    int limite, resultado = 0;

    cout << "Ingrese el límite de la secuencia: ";
    cin >> limite;

    if (limite == 0) {
        cout << "La sumatoria de los términos es 0\n";
    } else {
        int i = 1;
        int j = 3;
        while (i <= limite) {
            cout << i << "^" << j;
            resultado += pow(i, j);
            if (i < limite) {
                cout << " + ";
            }
            i++;
        }
        cout << " = " << resultado;
    }

    return 0;
}
