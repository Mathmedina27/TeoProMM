/**
 * @file Ejercicio12Fun.c++
 * @author your name (you@domain.com)
 * @brief Sumar los números impares hasta n
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void sumarImpares(int limite);

int main(int argc, char const *argv[]){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int limite;
    cout<<"Ingrese el limite de la secuencia: ";cin>>limite;
    sumarImpares(limite);
}

void sumarImpares(int limite){
    int sumatoria=0;
    for (int i = 1; i<= limite; i+=2){
        cout<<i<<" + ";
        sumatoria +=i;
        
    }
    cout<<"="<<sumatoria;
}