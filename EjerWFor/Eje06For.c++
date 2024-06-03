/**
 * @file clase3Factorial.c++
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
    int numero, factorial=1;
    cout<<"Ingrese el numero del que desea saber el factorial: "; cin>>numero;
    for (int i = numero; i > 0; i--){
        factorial *= i;
    }
    cout<<numero<<"!="<<factorial;
    
    return 0;
}
