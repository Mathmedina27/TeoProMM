/**
 * @file Eje19While.c++
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

int main(int argc, char const *argv[]) {
    system("@cls||clear");
    int limite, nTriangular = 0;
    cout << "Ingrese el límite de la serie: ";
    cin >> limite;

    int i = 1;
    while (i <= limite) {
        nTriangular += i;
        i++;
    }

    cout << "El número triangular hasta " << limite << " es: " << nTriangular << endl;
    return 0;
}
