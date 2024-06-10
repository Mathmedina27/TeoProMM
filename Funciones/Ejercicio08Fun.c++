/**
 * @file Ejercicio08Fun.c++
 * @author your name (you@domain.com)
 * @brief Producto de una serie geométrica
 * @version 0.1
 * @date 2024-06-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

void pedirDatos();
void calcularprod(int limite);

int main(int argc, char const *argv[])
{
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int limite;
    cout<<"Ingrese el limite de la secuencia: ";cin>>limite;
    calcularprod(limite);
}

void calcularprod(int limite){
    int contador =0, producto =1;
    if (limite == 0){
            cout<<"El producto de los terminos es de 0 \n";
        }else{
            for (int i = 2; contador < limite; i++){
                if (i%2==0){
                    cout<<i<<" * ";
                    producto *= i;
                    contador++;
                }   
            }
            cout<<"\n El producto de los terminos es: "<<producto<<endl;
        }

}