/**
 * @file Eje19For.c++
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
    int limite, nTriangular=0;
    cout<<"Ingrese el limite de la serie: "; cin>> limite;
    for (int i = 1; i <= limite; i++){
        cout<<i<<" + ";
        nTriangular+=i;
    }
    cout<<"= "<<nTriangular;
    return 0;
}
