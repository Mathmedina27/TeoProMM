/**
 * @file Eje6While.c++
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
    int numero, factorial = 1;
    cout << "Ingrese el número del que desea saber el factorial: ";
    cin >> numero;

    while (numero > 0) {
        factorial *= numero;
        numero--;
    }

    cout << "El factorial es: " << factorial;

    return 0;
}
