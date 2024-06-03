/**
 * @file Eje18For.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

bool esPrimo(int num);

void mostrarPrimosHastaN(int n);

int main(int argc, char const *argv[]){
    int n;
    cout << "Ingrese un numero (n): ";
    cin >> n;

    mostrarPrimosHastaN(n);

    return 0;
}
bool esPrimo(int num){
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void mostrarPrimosHastaN(int n){
    cout << "Numeros primos desde 1 hasta " << n << ":\n";
    for (int i = 2; i <= n; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
