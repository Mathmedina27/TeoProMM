/**
 * @file Eje20For.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include<stdlib.h>

using namespace std;


unsigned long long factorial(int num);

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int n;
    cout<<"Ingrese el limite de la serie: ";
    cin>>n;

    unsigned long long sumaFactoriales = 0;
    for (int i = 1; i <= n; ++i) {
        sumaFactoriales += factorial(i);
    }
    cout << "La suma de los factoriales de los primeros "<<n<<" numeros es: " <<sumaFactoriales<<endl;

    return 0;
}

unsigned long long factorial(int num){
    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}