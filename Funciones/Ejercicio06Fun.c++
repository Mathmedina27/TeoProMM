/**
 * @file Ejercicio06Fun.c++
 * @author your name (you@domain.com)
 * @brief Factorial de un número
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;
void pedirDatos();
void Factorial(int limite);

int main(int argc, char const *argv[]){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int limite;
    cout<<"Ingrese el limite para calcular su factorial: "; cin>>limite;
    Factorial(limite);
}

void Factorial(int limite){
    long resultado=1;
    for (int i = limite; i>0; i--){
        resultado *=i;
    }
    cout<<limite<<"!= "<<resultado;
    
}