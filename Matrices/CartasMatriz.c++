/**
 * @file CartasMatriz.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct CartasMatriz{
    int num[13];
}Corazones, Picas, Brillos, Treboles;

int fajo[52];


void InicializarPalo(CartasMatriz& Palo);
void PresentarPalo(int tamnio, CartasMatriz& Palo);
int noRepetir(CartasMatriz& Palo, int tamanio, int num);
void GuardarEnFajo(CartasMatriz& Corazones, CartasMatriz& Picas, CartasMatriz& Brillos, CartasMatriz& Treboles, int fajo[], int tamanio);
void PresentarFajo(int fajo[], int tamanio);
void GuardarEnMatriz(int fajo[], int tamanio,int tamfajo, int matriz[][13]);
void PresentarMatriz(int tamanio, int matriz[][13]);
void OrdenarMatriz(int tamanio, int matriz[][13], int matrizR[][13]);

int main(int argc, char const *argv[]){
    system("@cls||clear");

    

    int numero, tamanio=13, i=0, opcion, tamfajo = 52;
    int matriz[4][13], matrizR[4][13];

    do{

        srand(time(NULL));
        for (int i = 0; i < tamanio; i++){
            Corazones.num[i]=0;
            Picas.num[i]=0;
            Brillos.num[i]=0;
            Treboles.num[i]=0;
        }
        cout << "Corazones: ";
        InicializarPalo(Corazones);
        PresentarPalo(tamanio, Corazones);
        cout << "Picas: ";
        InicializarPalo(Picas);
        PresentarPalo(tamanio, Picas);
        cout << "Brillos: ";
        InicializarPalo(Brillos);
        PresentarPalo(tamanio, Brillos);
        cout << "Treboles: ";
        InicializarPalo(Treboles);
        PresentarPalo(tamanio, Treboles);

        cout<< "Fajo completo: \n";
        GuardarEnFajo(Corazones, Picas, Brillos, Treboles, fajo, tamanio);
        PresentarFajo(fajo, tamfajo);

        cout<<"En Matriz: \n";
        GuardarEnMatriz(fajo, tamanio, tamfajo, matriz);
        PresentarMatriz(tamanio, matriz);

        cout<<"Matriz Ordenada:\n";
        OrdenarMatriz(tamanio, matriz, matrizR);
        PresentarMatriz(tamanio, matrizR);
        

        cout<<"Desea continuar? (0 para salir, 1 para continuar): ";
        cin>> opcion;
    } while (opcion != 0);
    
    return 0;
}
void InicializarPalo(CartasMatriz& Palo){
    int i =0, num;
    int tamanio =13;
    while (i < tamanio){
        num = (rand() % 13) + 1;
        if (noRepetir(Palo,tamanio,num) ==0){
            Palo.num[i]= num;
            i++;
        } 
    }  
}
void PresentarPalo(int tamnio, CartasMatriz& Palo){
    for (int i = 0; i < tamnio; i++){
        cout<<Palo.num[i]<<", ";
    }
    cout<<endl;
    
}
int noRepetir(CartasMatriz& Palo, int tamanio, int num){
    for (int i = 0; i < tamanio; i++){
        if (Palo.num[i]== num){
            return 1;
        }
    }
    return 0;
    
}

void GuardarEnFajo(CartasMatriz& Corazones, CartasMatriz& Picas, CartasMatriz& Brillos, CartasMatriz& Treboles, int fajo[], int tamanio){
    int indice=0;
    for (int i = 0; i < tamanio ; i++)
    {
        fajo[indice++]= Corazones.num[i];
    }
    for (int i = 0; i < tamanio ; i++)
    {
        fajo[indice++]= Picas.num[i];
    }
    for (int i = 0; i < tamanio ; i++)
    {
        fajo[indice++]= Brillos.num[i];
    }
    for (int i = 0; i < tamanio ; i++)
    {
        fajo[indice++]= Treboles.num[i];
    }
    
}
void PresentarFajo(int fajo[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cout << fajo[i] << ", ";
    }
    cout << endl;
}

void GuardarEnMatriz(int fajo[], int tamanio, int tamfajo, int matriz[][13]){
    int indice=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < tamanio; j++){        
                matriz[i][j]= fajo[indice++];
      
        }   
    } 
}

void PresentarMatriz(int tamanio, int matriz[][13]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < tamanio; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

void OrdenarMatriz(int tamanio, int matriz[][13], int matrizR[][13]){
    int aux=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < tamanio; j++){
            matrizR[i][j] = matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < tamanio - 1; j++){
            for (int k = 0; k < tamanio - j - 1; k++){
                if (matrizR[i][k] > matrizR[i][k + 1]){
                    int aux = matrizR[i][k];
                    matrizR[i][k] = matrizR[i][k + 1];
                    matrizR[i][k + 1] = aux;
                }
            }
        }
    }
}

