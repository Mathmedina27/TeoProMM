/**
 * @file raizXrestas.c++
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
    int raiz, resultado=0, contador;
    cout<<"Ingrese el valor del que desea saber su raiz cuadrada: "; cin>>raiz;
    
    for (contador= 1; raiz> 0; contador++){ 
        for (raiz ; raiz > 0 ; raiz-=(contador)){  
            resultado++;
            contador+=2;
        }
        
    }
       
    cout<<"La raiz cuadrada entera del numero que usted ingreso es:"<<resultado;
    
    return 0;
}
