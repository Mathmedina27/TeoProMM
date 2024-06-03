/**
 * @file Ejer2For.c++
 * @author your name (you@domain.com)
 * @brief INVERSO DE UN NUMERO
 * Dado un numero obtener el inverso es decir: 12345 -> 54321
 * @version 0.1
 * @date 2024-06-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include<stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    char numero[100];
    
    cout<<"ingrese el numero que desea invertir: ";cin>>numero;

    int limite = strlen(numero);

    
    for (int i = 0; i < limite; i++){
        cout<<numero[i];
    }
    cout<<endl;
    for (int i = limite; i >=0; i--){
        cout<<numero[i];
    }
    
    
    
    
    return 0;
}
