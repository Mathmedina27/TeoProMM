/**
 * @file EsprimoFor.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>
#include <stdlib.h>


using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int numero,i;
    bool es_primo = 1;
    cout<<"Ingrese el numero que desea comprabar: "; cin>>numero;
    for ( i = 2; i <=numero; i++){
        if (numero % i == 0){
            es_primo = 0;
        }

    }

    if (es_primo == 0){
        cout<<"El numero "<<numero<<" que usted ingreso es primo";
    }else{
        cout<<"El numero que usted ingreso no es primo";
    }

    
    
    return 0;
}
