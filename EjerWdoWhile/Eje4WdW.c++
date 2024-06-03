/**
 * @file Eje4WdW.c++
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

    cout << "Ingrese un número para calcular su raíz cúbica: ";
    cin >> number;

    aprox = number;

    int i = 0;
    do {
        absoluto = abs(number - aprox * aprox * aprox);

        if (absoluto < precision) {
            break; 
        }
        aprox = (2 * aprox + number / (aprox * aprox)) / 3;
        i++;
    } while (i < 1000);

    cout << "La raíz cúbica de " << number << " es aproximadamente " << aprox << endl;

    return 0;
}
