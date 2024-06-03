/**
 * @file Eje3For.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int base, exponente, respuesta=0, contador;

    cout<<"Ingrese la base de la potencia: "; cin>>base;
    cout<<"Ingrese el exponente de la potencia: "; cin>>exponente;
    contador= base;

    for (int i = 1; i < exponente; i++){ //1
        
        for (int j = base; j <= contador; j++){
            respuesta += contador;  
            cout<<respuesta<<endl; 
        }
        contador=respuesta;
    }
    cout<<contador;

    
    return 0;
}
