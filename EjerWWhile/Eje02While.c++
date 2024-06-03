/**
 * @file Eje2While.c++
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
#include <string.h>

using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    char numero[100];
    
    cout << "Ingrese el número que desea invertir: ";
    cin >> numero;

    int limite = strlen(numero);

    
    cout << "Número original: " << numero << endl;

    
    int i = limite - 1;
    while (i >= 0){
        cout << numero[i];
        i--;
    }
    cout << endl;
    
    return 0;
}
