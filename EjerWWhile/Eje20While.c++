/**
 * @file Eje20While.c++
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

unsigned long long factorial(int num);

int main(int argc, char const *argv[]) {
    system("@cls||clear");
    int n;
    cout << "Ingrese el límite de la serie: ";
    cin >> n;

    unsigned long long sumaFactoriales = 0;
    int i = 1;
    while (i <= n) {
        sumaFactoriales += factorial(i);
        i++;
    }

    cout << "La suma de los factoriales de los primeros " << n << " números es: " << sumaFactoriales << endl;

    return 0;
}

unsigned long long factorial(int num) {
    unsigned long long result = 1;
    int i = 1;
    while (i <= num) {
        result *= i;
        i++;
    }
    return result;
}
