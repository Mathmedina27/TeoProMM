/**
 * @file Eje16WdW.c++
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
    int limite;
    float sumatoria = 0.0;

    cout << "Ingrese el límite de la secuencia: ";
    cin >> limite;

    int i = 1;
    do {
        cout << "1/" << i;
        sumatoria += 1.0 / i;
        if (i < limite) {
            cout << " + ";
        }
        i++;
    } while (i <= limite);
    cout << " = " << sumatoria << endl;
    system("PAUSE");
    return 0;
}
