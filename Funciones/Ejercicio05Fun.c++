/**
 * @file Ejercicio05Fun.c++
 * @author your name (you@domain.com)
 * @brief  FIBONACCI
 * @version 0.1
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

void ingresarDatos();
void Fibonacci(int limite);

int main(int argc, char const *argv[]){
    ingresarDatos();
    return 0;
}
void ingresarDatos(){
    int limite;
    cout<<"Ingrese el limite de la serie: "; cin>>limite;
    Fibonacci(limite);
}

void Fibonacci(int limite){
    cout<<"El reultado de la serie segun el limite que usted ingreso es: ";
    int anterior=0, siguiente=1, resultado=0;
      for (int i = 1; i <= limite; i++){
        resultado = siguiente + anterior;
        cout<<resultado<<",";
        siguiente = anterior;
        anterior = resultado;
    
    }
}