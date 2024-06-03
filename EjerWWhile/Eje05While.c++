/**
 * @file Eje5While.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-03
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

    cout << "Ingrese el límite de la serie: ";
    cin >> limite;

    int i = 1;
    while (i <= limite){
        resultado = siguiente + anterior;
        cout << resultado << " ";
        siguiente = anterior;
        anterior = resultado;
        i++;
    }
    
    return 0;
}
