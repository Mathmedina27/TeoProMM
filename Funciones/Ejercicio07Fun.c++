/**
 * @file Ejercicio07Fun.c++
 * @author your name (you@domain.com)
 * @brief Suma de una serie aritmética
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

void pedirDatos();
void calcularSumatoria(int limite);
int main(int argc, char const *argv[]){
    pedirDatos();
    return 0;
}


void pedirDatos(){
    int limite;
    cout<<"ingrese hasta que numero desea realizar la suma:"; cin>>limite;
    calcularSumatoria(limite);
}
void calcularSumatoria(int limite){
    int sumatoria=0;
    for (int i = 0; i <=limite; i++)
    {
        sumatoria +=i;
    }
    cout<<"El resultado de las suma de los primeros "<<limite<<" numeros es: "<< sumatoria;
}