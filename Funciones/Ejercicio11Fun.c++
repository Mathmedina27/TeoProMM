/**
 * @file Ejercicio11Fun.c++
 * @author your name (you@domain.com)
 * @brief Encontrar el MCD (Máximo Común Divisor)
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void hallarMCD(int num1, int num2);
int main(int argc, char const *argv[]){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int n1, n2;
    cout << "Ingrese el primer número: ";cin>>n1;
    cout << "Ingrese el segundo número: ";cin>>n2;
    hallarMCD(n1, n2);
}

void hallarMCD(int num1, int num2){
    int MCD =0, respuesta=0;
    while (MCD == num1%num2){
        num1 = num2;
        num2 = MCD;
        respuesta = MCD;
    }
    cout << "El Máximo Común Divisor (MCD) es: " << respuesta;

}