/**
 * @file clase3Suma100.c++
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
    int limite,sumatoria=0;
    cout<<"ingrese hasta que numero desea realizar la suma:"; cin>>limite;

    for (int i = 0; i <=limite; i++)
    {
        sumatoria +=i;
    }
    cout<<"El resultado de las suma de los primeros "<<limite<<" numeros es: "<< sumatoria;
    return 0;
}
