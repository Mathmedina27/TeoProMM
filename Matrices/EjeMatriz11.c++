/**
 * @file EjeMatriz11.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @file EjeMatriz7.cpp
 * @brief Programa para ingresar, presentar y multiplicar matrices
 * @version 0.1
 * @date 2024-07-02
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int IngresarDatos();
void GenerarMatriz(int Orden, int Matriz[][10]);
void PresentarMatriz(int Orden, int Matriz[][10]);
void MultiplicarMatrices(int Orden, int MatrizA[][10], int MatrizB[][10], int MatrizR[][10]);

struct Matriz {
    int matriz[10][10];
} MatrizA, MatrizB, MatrizR;

int main(int argc, char const *argv[]) {
    system("cls||clear");
    int respuesta;

    do {
        int Orden = IngresarDatos();

        cout << "\tMatriz A\n" << endl;
        GenerarMatriz(Orden, MatrizA.matriz);

        cout << "Matriz B \n";
        GenerarMatriz(Orden, MatrizB.matriz);

        system("cls||clear");

        cout << "\nMatriz A\n";
        PresentarMatriz(Orden, MatrizA.matriz);

        cout << "\nMatriz B \n";
        PresentarMatriz(Orden, MatrizB.matriz);

        // Multiplicar las matrices
        MultiplicarMatrices(Orden, MatrizA.matriz, MatrizB.matriz, MatrizR.matriz);

        cout << "\nMatriz R (Resultado de A * B)\n";
        PresentarMatriz(Orden, MatrizR.matriz);

        cout << "Desea continuar? (0 para salir, 1 para continuar): ";
        cin >> respuesta;
    } while (respuesta != 0);

    return 0;
}

int IngresarDatos() {
    int Orden;
    cout << "\t ===BIENVENIDO===" << endl;
    cout << "Ingrese el orden de la matriz MxN: ";
    cin >> Orden;
    return Orden;
}

void GenerarMatriz(int Orden, int Matriz[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            cout << "Ingrese los valores de [" << i << "][" << j << "]: ";
            cin >> Matriz[i][j];
        }
    }
}

void PresentarMatriz(int Orden, int Matriz[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            cout << Matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void MultiplicarMatrices(int Orden, int MatrizA[][10], int MatrizB[][10], int MatrizR[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            MatrizR[i][j] = 0; // Inicializar el valor de MatrizR
            for (int k = 0; k < Orden; k++) {
                MatrizR[i][j] += MatrizA[i][k] * MatrizB[k][j];
            }
        }
    }
}
