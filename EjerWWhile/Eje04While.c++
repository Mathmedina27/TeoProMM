/**
 * @file Eje4While.c++
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

int main(int argc, char const *argv[]) {
    system("@cls||clear");
    double number;
    double aprox;
    double precision = 0.0000001;
    double absoluto;

    cout << "Ingrese un numero para calcular su raiz cubica: ";
    cin >> number;

    aprox = number;

    for (int i = 0; i < 1000; ++i) { 
        absoluto = abs(number - aprox * aprox * aprox);

        if (absoluto < precision) {
            break; 
        }
        aprox = (2 * aprox + number / (aprox * aprox)) / 3;
    }

    // Resultado
    cout << "La raiz cubica de " << number << " es aproximadamente " << aprox << std::endl;

    return 0;
}