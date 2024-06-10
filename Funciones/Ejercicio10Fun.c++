/**
 * @file Ejercicio10Fun.c++
 * @author your name (you@domain.com)
 * @brief Verificar si un número es primo
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void esprimo(int num);

int main(int argc, char const *argv[])
{
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int numero;
    cout<<"ingrese un numero que desee comprobar si es primo: "; cin>>numero;
    esprimo(numero);
}

void esprimo(int num){
    bool es_primo = 1;
    for ( int i = 2; i <=num; i++){
        if (num % i == 0){
            es_primo = 0;
        }

    }

    if (es_primo == 0){
        cout<<"El numero "<<num<<" que usted ingreso es primo";
    }else{
        cout<<"El numero que usted ingreso no es primo";
    }
}