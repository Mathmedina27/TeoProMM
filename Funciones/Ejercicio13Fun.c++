/**
 * @file Ejercicio13Fun.c++
 * @author your name (you@domain.com)
 * @brief Sumar los números pares hasta n
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void SumarPares(int limite);

int main(int argc, char const *argv[])
{
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int limite;
    cout<<"Ingrese el limite de la secuencia: ";cin>>limite;
    SumarPares(limite);
}

void SumarPares(int limite){
    int sumatoria=0;
    for (int i = 2; i <= limite; i+=2){
        cout<<i<<" + ";
        sumatoria +=i;
        
    }
    cout<<"="<<sumatoria;
}