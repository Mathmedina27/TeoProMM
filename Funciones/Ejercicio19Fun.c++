/**
 * @file Ejercicio19Fun.c++
 * @author your name (you@domain.com)
 * @brief Calcular el n-ésimo número triangular
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void nTriangular(int limite);

int main(int argc, char const *argv[]){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int limite;
    cout<<"Ingrese el limite de la secuencia: ";cin>>limite;
    nTriangular(limite);
}

void nTriangular(int limite){
   int nTriangular=0;
   for (int i = 1; i <= limite; i++){
        cout<<i<<" + ";
        nTriangular+=i;
    }
    cout<<"= "<<nTriangular;
}
