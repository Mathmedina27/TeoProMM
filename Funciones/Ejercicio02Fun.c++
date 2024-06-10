/**
 * @file Ejercicio02Fun.c++
 * @author your name (you@domain.com)
 * @brief Inverso de un número
 * @version 0.1
 * @date 2024-06-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string.h>


using namespace std;
void pedirDatos();
void inversor(int limite, char n[]);


int main(int argc, char const *argv[]){
    pedirDatos();
    return 0;
}
void pedirDatos(){
    char numero[100];
    cout<<"Ingrese el numero que desea invertir: ";
    cin>>numero;
    int limite= strlen(numero);
    inversor(limite, numero);

}
void inversor(int limite, char n[]){
    cout<<"El inverso del numero "<<n<<" es: ";
    for (int i = limite ; i>=0; i--){
        cout<<n[i];
    }
}