/**
 * @file Ejercicio09Fun.c++
 * @author your name (you@domain.com)
 * @brief Número de dígitos de un número
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void calculardigitos(int num);

int main(int argc, char const *argv[])
{
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int numero;
    cout << "Ingrese el numero del cual desea saber la cantidad de digitos: "; cin >> numero;

}
void calculardigitos(int num){
    int contador=0;
    for (int i = num; i != 0; i /= 10) {
        contador++;
    }
    cout<< "El numero "<<num<<" tiene "<<contador<<" digito(s)"<<endl;
}