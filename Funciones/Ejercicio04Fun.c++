/**
 * @file Ejercicio04Fun.c++
 * @author your name (you@domain.com)
 * @brief Radicación mediante restas sucesivas
 * @version 0.1
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;
void ingresarDatos();
void calcularRaiz(int num);
int numero;
double aprox, absoluto, precision = 0.0000001;

int main(int argc, char const *argv[]){
    ingresarDatos();
    return 0;
}
void ingresarDatos(){
    cout<<"ingrese el numero del que desea sacar su raiz cubica: ";cin>>numero;
    calcularRaiz(numero);
}
void calcularRaiz(int num){
    aprox = num;
    for (int i = 0; i < 1000; ++i) { 
        absoluto = abs(num - aprox * aprox * aprox);

        if (absoluto < precision) {
            break; 
        }
        aprox = (2 * aprox + num / (aprox * aprox)) / 3;
    }
    
    cout<<"La Raiz cubica de "<<num<<" es aproximadamente: "<<aprox<<endl;


}