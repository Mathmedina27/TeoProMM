/**
 * @file Figonacci.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int limite,
    siguiente=1,
    anterior=0,
    resultado=0;

    cout<<"ingrese el limite de la serie: ";cin>>limite;

    for (int i = 1; i <= limite; i++){
        resultado = siguiente + anterior;
        cout<<resultado<<" ";
        siguiente = anterior;
        anterior = resultado;
    }
    
    return 0;
}
