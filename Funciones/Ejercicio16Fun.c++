/**
 * @file Ejercicio16Fun.c++
 * @author your name (you@domain.com)
 * @brief Suma de una serie de números fraccionarios
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void SumarFracciones(int limite);

int main(int argc, char const *argv[]){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int limite;
    cout<<"Ingrese el limite de la secuencia: ";cin>>limite;
    SumarFracciones(limite);
}

void SumarFracciones(int limite){
    float sumatoria=0;
    for (int i = 1; i <= limite; i++){

        cout<<"1"<<"/"<<i<<" + ";

        sumatoria += 1.0 / i;   
    }
    cout<<"="<<sumatoria<<endl;
}
