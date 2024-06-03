/**
 * @file Eje10Wdw.c++
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
    int numero, i = 2;
    bool es_primo = true;

    cout << "Ingrese el número que desea comprobar: ";
    cin >> numero;

    do {
        if (numero % i == 0) {
            es_primo = false;
            break;
        }
        i++;
    } while (i <= numero);

    cout << "El número que usted ingresó ";
    if (es_primo) {
        cout << "es primo." << endl;
    } else {
        cout << "no es primo." << endl;
    }

    return 0;
}

