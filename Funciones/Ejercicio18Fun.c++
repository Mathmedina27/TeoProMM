/**
 * @file Ejercicio18Fun.c++
 * @author your name (you@domain.com)
 * @brief Contar los números primos hasta n
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void ingresarDatos();
void mostrarPrimosHasta(int n);
bool esPrimo(int num);

int main(int argc, char const *argv[]){
    ingresarDatos();
    return 0;
}


void ingresarDatos(){
    int n;
    cout << "Ingrese un numero (n): ";cin>>n;
    mostrarPrimosHasta(n);
}


void mostrarPrimosHasta(int n){
    cout << "Numeros primos desde 1 hasta " << n << ":\n";
    for (int i = 2; i <= n; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
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