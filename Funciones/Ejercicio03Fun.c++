/**
 * @file Ejercicio03Fun.c++
 * @author your name (you@domain.com)
 * @brief Potencia mediante sumas sucesivas
 * @version 0.1
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;
void pedirDatos();
long potencia(int base, int exponente);
long contador=0;
int base, exponente;

int main(int argc, char const *argv[]){
    pedirDatos();
    long result = potencia(base, exponente);
    cout<< result;
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la base de la potencia por favor: "; cin>>base;
    cout<<"Ingrese el exponnte al que desea elevar la base: ";cin>>exponente;
    
}
long potencia(int base, int exponente){
    contador = base;
    long respuesta=0;
    
    for (int i = 1; i <= exponente; i++){ //1
        respuesta=0;
        for (int j = 1; j <= contador; j++){
            respuesta += base;  
            cout<<respuesta<<endl; 
        }
        respuesta= contador;
    }
    return contador;
}