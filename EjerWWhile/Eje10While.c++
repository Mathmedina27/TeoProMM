/**
 * @file Eje10While.c++
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

    while (i <= numero) {
        if (numero % i == 0) {
            es_primo = false;
            break;
        }
        i++;
    }

    if (es_primo) {
        cout << "El número " << numero << " que usted ingresó es primo." << endl;
    } else {
        cout << "El número que usted ingresó no es primo." << endl;
    }

    return 0;
}
