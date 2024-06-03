/**
 * @file Eje16.c++
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


int main(int argc, char const *argv[]){
    system ("@cls||clear");
    int limite;
    float sumatoria = 0.0;
    
    cout<<"Ingrese el limite de la secuencia: ";cin>>limite;


    for (int i = 1; i <= limite; i++){

        cout<<"1"<<"/"<<i<<" + ";

        sumatoria += 1.0 / i;   
    }
    cout<<"="<<sumatoria<<endl;
    system("PAUSE");
    return 0;
}
