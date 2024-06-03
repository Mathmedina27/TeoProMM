/**
 * @file Eje11WdW.c++
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
    system("cls||@clear");
    int n1, n2, MCD = 1, r = 0;
    cout << "Ingrese el primer número: ";
    cin >> n1;
    cout << "Ingrese el segundo número: ";
    cin >> n2;

    do {
        MCD = n1 % n2;
        n1 = n2;
        n2 = MCD;
        r = MCD;
    } while (MCD != 0);

    cout << "El Máximo Común Divisor (MCD) es: " << r;
    return 0;
}
