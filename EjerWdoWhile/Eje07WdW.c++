/**
 * @file Eje7WdW.c++
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
    int limite,sumatoria=0;
    cout << "Ingrese hasta qué número desea realizar la suma: ";
    cin >> limite;

    int i = 0;
    do {
        sumatoria += i;
        i++;
    } while (i <= limite);

    cout << "El resultado de la suma de los primeros " << limite << " números es: " << sumatoria;

    return 0;
}
