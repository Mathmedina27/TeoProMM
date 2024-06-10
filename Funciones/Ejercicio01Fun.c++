/**
 * @file Ejercicio01Fun.c++
 * @author your name (you@domain.com)
 * @brief Suma de los dígitos de un número
 * @version 0.1
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

void IngresarDatos();
void calcularValor(int numero);
int numero;
int main(int argc, char const *argv[]){
    IngresarDatos();

    return 0;
}

void IngresarDatos(){
    cout<<"Ingrese el valor que desea comprobar: ";
    cin>>numero;
    calcularValor(numero);
}

void calcularValor(int numero){
    int resultado=0;
    if (numero < 10){
            resultado = numero;
            cout<<resultado;
    }else{
        for (numero; numero > 0; numero /= 10){                
            resultado += numero%10;    
        }
          cout<<resultado;
        }



}
