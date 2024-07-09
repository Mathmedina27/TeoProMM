/**
 * @file EjeMatriz9.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int IngresarDatos();
void GenerarMatrizAleatorio(int Orden, int Matriz[][10], int cantidad,int Aleatorio[100]);
void PresentarMatriz(int Orden, int Matriz[][10]);
void MatrizSimetrica(int Orden, int Matriz[][10], int MatrizS[][10]);


struct Matriz{
    int matriz[10][10];
}MatrizA, MatrizS;


int main(int argc, char const *argv[]) {
    system("cls||clear");
    int respuesta;
    srand(time(NULL));


    do {
        int Orden = IngresarDatos();
        MatrizA.matriz[10][10];
        MatrizS.matriz[10][10];
        int cantidad = Orden*Orden;

        int aleatorio[cantidad];

        cout << "\t Matriz A" << endl;
        GenerarMatrizAleatorio(Orden, MatrizA.matriz,cantidad,aleatorio);
        
        system("@cls||clear");
        cout<<"Matriz A\n";
        PresentarMatriz(Orden, MatrizA.matriz);

        cout<<"Matriz R \n";
        
        MatrizSimetrica(Orden, MatrizA.matriz,MatrizS.matriz);
        PresentarMatriz(Orden, MatrizS.matriz);

        cout << "Desea continuar? (0 para salir, 1 para continuar): ";
        cin >> respuesta;
    } while (respuesta != 0);

    return 0;
}

int IngresarDatos() {
    int Orden;
    cout << "\t ===BIENVENIDO===" << endl;
    cout << "Ingrese El Orden De La Matriz Mnxn: ";
    cin >> Orden;
    return Orden;
}

void GenerarMatrizAleatorio(int Orden, int Matriz[][10], int cantidad,int Aleatorio[100]) {
    srand(time(NULL));
    for (int i = 1; i <= Orden; i++) {
        for (int j = 1; j <= Orden; j++) {
            for (int k = 1; k <= cantidad; k++)
            {
                Aleatorio[k]=rand()%cantidad;
                Matriz[i][j]= Aleatorio[k];
            }
        }
    }
}

void PresentarMatriz(int Orden, int Matriz[][10]) {
    for (int i = 1; i <= Orden; i++) {
        for (int j = 1; j <= Orden; j++) {
            cout << Matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void MatrizSimetrica(int Orden, int Matriz[][10], int MatrizS[][10]){
    for (int i = 1; i <= Orden; i++){
        for (int j = 1; j <= Orden; j++){
            if (i==j){
                MatrizS[i][j]=1;
            }else if (i<j)
            {
                MatrizS[i][j]= Matriz[i][j];
                MatrizS[j][i]= Matriz[i][j];
            } 
        }  
    }
    
}
