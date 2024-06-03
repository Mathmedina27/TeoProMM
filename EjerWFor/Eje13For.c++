/**
 * @file Eje13For.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/**
 * @file Eje12For.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int limite,contador=0, sumatoria=0;
    cout<<"Ingrese el limite hasta el que quiere sumar los primeros numeros impares: ";cin>>limite;
    for (int i = 2; contador < limite; i+=2){
        cout<<i<<" + ";
        sumatoria +=i;
        contador++;
    }
    cout<<"="<<sumatoria;

    return 0;
}
