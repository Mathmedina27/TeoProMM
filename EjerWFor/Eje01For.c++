/**
 * @file Eje1For.c++
 * @author your name (you@domain.com)
 * @brief Suma de los dígitos de un número
 * @version 0.1
 * @date 2024-05-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stdlib.h>
using namespace std;


int main(int argc, char const *argv[]){
    system("@cls||clear");
    int numero, resultado=0;
    
    cout<<"ingrese una cantidad: "; cin>>numero;
        if (numero < 10){
            resultado= numero;
            cout<<resultado;
        }else{
            for (numero; numero > 0; numero /= 10){                
                resultado += numero%10;
    
            }
            cout<<resultado;
        }
    
    return 0;
}
