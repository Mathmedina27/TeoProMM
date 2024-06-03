/**
 * @file Eje11For.c++
 * @author your name (you@domain.com)
 * @n2rief 
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
    system("cls||@clear");
    int n1,n2,MCD=1, r=0;
    cout<<"Ingrese el primer numero: "; cin>>n1;
    cout<<"ingrese el segundo numero: "; cin>>n2;

    for (; MCD= n1% n2; ) {
        n1= n2;
        n2 = MCD;
        r= MCD;
    }
    cout<<"El Maximo Comun Divisor (MCD) es: "<<r;
    return 0;
}
