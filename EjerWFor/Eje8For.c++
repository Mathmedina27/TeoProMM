/**
 * @file ejercicio2.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int limite, contador=0;
    int producto =1;
        cout<<"Ingrese el limite de la secuencia: ";cin>>limite;
        if (limite == 0){
            cout<<"El producto de los terminos es de 0 \n";
        }else{
        
            for (int i = 2; contador < limite; i++){
                if (i%2==0)
                {
                    cout<<i<<" * ";
                    producto *= i;
                    contador++;
                }
                
                
            }
            cout<<"\n El producto de los terminos es: "<<producto<<endl;
       }
      

    
    return 0;
}
