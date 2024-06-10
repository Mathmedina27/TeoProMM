/**
 * @file Ejercicio20Fun.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
unsigned long long factorial(int num);
void sumaFactoriales(int num);


int main(int argc, char const *argv[]){
    system("@cls||clear");
    pedirDatos();

    return 0;
}


void pedirDatos(){
    int n;
    cout<<"Ingrese el limite de la serie: ";
    cin>>n;
    sumaFactoriales(n);
}


void sumaFactoriales(int num){
    unsigned long long sumaFactoriales = 0;
    for (int i = 1; i <= num; ++i) {
        sumaFactoriales += factorial(i);
    }
    cout << "La suma de los factoriales de los primeros "<<num<<" numeros es: " <<sumaFactoriales<<endl;
}


unsigned long long factorial(int num){
    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}