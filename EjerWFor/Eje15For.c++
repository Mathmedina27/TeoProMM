/**
 * @file Eje15For.c++
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
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int  limite, resultado= 0;

        cout<<"Ingrese el limite de la ssecuencia: "; cin>>limite;

        if (limite == 0)
        {
        cout<<"La sumatoria de los terminos es 0 \n";
        }else
        {
            for (int i=1, j=3; i <= limite; i++ ){
                    cout<<i<<"^"<<j<<" + ";
                    resultado += pow(i,j); 
                }
            cout<<"= "<<resultado;
        }
    
    return 0;
}