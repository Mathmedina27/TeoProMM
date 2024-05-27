/**
 * @file condicionalSyM.c++ 
 * @author your name (you@domain.com)
 * @brief mayor de dos numeros || iguales
 * @version 0.1
 * @date 2024-05-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int n1,n2,n3, max=0;
    cout<<"ingrese el primer numero a comparar: "; cin>>n1;
    cout<<"ingrese el segundo numero a comparar: "; cin>>n2;
    cout<<"ingrese el tercer numero a comparar: "; cin>>n3;

    max= (n1>n2) ? (n1>n3) ?n1:n3:n2; 
    cout<<"El mayor de los tres numeros es: "<<max;

    return 0;
}
