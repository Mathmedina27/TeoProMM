/**
 * @file EjeMatriz1.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int IngresarDatos();
void GenerarMatriz(int Orden, int Matriz[][10]);
void PresentarMatriz(int Orden, int Matriz[][10]);
void PresentarEsquinas(int Orden, int Matriz[][10]);


struct Matriz{
    int matriz[10][10];
}MatrizA;


int main(int argc, char const *argv[]) {
    system("cls||clear");
    int respuesta;

    do {
        int Orden = IngresarDatos();
        MatrizA.matriz[10][10]; 

        cout << "\t Matriz A" << endl;
        GenerarMatriz(Orden, MatrizA.matriz);
        
        system("@cls||clear");
        cout<<"Matriz A\n";
        PresentarMatriz(Orden, MatrizA.matriz);

        cout<<"Matriz R \n";
        PresentarEsquinas(Orden,MatrizA.matriz);

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

void GenerarMatriz(int Orden, int Matriz[][10]) {
    for (int i = 1; i <= Orden; i++) {
        for (int j = 1; j <= Orden; j++) {
            cout << "Ingrese los valores de [" <<i<< "][" <<j<< "]: ";
            cin >> Matriz[i][j];
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
void PresentarEsquinas(int Orden, int Matriz[][10]){

    for (int i = 1; i <= Orden; i++){
        for (int j = 1; j <= Orden; j++){
            if ((i==1 || j==Orden) && (i==Orden || j==1) || (i==1 && j==Orden) || (i==Orden && j==1)){
                cout<<Matriz[i][j]<<"\t";
                
            }else{
                cout<<" \t";
            }
        }
        cout<<endl;
    }

}