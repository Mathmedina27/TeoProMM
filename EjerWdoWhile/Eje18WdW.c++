/**
 * @file Eje18WdW.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

bool esPrimo(int num);

void mostrarPrimosHastaN(int n);

int main(int argc, char const *argv[]) {
    int n;
    cout << "Ingrese un número (n): ";
    cin >> n;

    mostrarPrimosHastaN(n);

    return 0;
}

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    int i = 2;
    do {
        if (num % i == 0) {
            return false;
        }
        i++;
    } while (i * i <= num);
    return true;
}

void mostrarPrimosHastaN(int n) {
    cout << "Números primos desde 1 hasta " << n << ":\n";
    int i = 2;
    do {
        if (esPrimo(i)) {
            cout << i << " ";
        }
        i++;
    } while (i <= n);
    cout << endl;
}
