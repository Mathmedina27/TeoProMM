/**
 * @file Ejercicio14Fun.c++
 * @author your name (you@domain.com)
 * @brief Suma de los cuadrados de los primeros n números
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void SumarCuadrados(int limite);

int main(int argc, char const *argv[])
{
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int limite;
    cout<<"Ingrese el limite de la secuencia: ";cin>>limite;
    SumarCuadrados(limite);
}

void SumarCuadrados(int limite){
    int resultado=0, pot=0;
     if (limite == 0)
        {
        cout<<"La sumatoria de los terminos es 0 \n";
        }else
        {
            for (int i=1, j=2; i <= limite; i++){
                    cout<<i<<"^"<<j<<" + ";
                    pot = i;
                    pot*=i;
                    resultado += pot; 
                }
            cout<<"="<<resultado;
        }
}
