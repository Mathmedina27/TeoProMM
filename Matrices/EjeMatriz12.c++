/**
 * @file EjeMatriz11.cpp
 * @brief Programa para ingresar, presentar y elevar matrices a una potencia
 * @version 0.1
 * @date 2024-07-07
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int IngresarDatos();
int IngresarPotencia();
void GenerarMatriz(int Orden, int Matriz[][10]);
void PresentarMatriz(int Orden, int Matriz[][10]);
void CopiarMatriz(int Orden, int MatrizOrigen[][10], int MatrizDestino[][10]);
void MultiplicarMatrices(int Orden, int MatrizA[][10], int MatrizB[][10], int MatrizR[][10]);
void PotenciaMatriz(int Orden, int exponente, int MatrizA[][10], int MatrizR[][10]);

struct Matriz {
    int matriz[10][10];
} MatrizIni, MatrizR, MatrizAux;

int main(int argc, char const *argv[]) {
    system("cls||clear");
    int respuesta;

    do {
        int Orden = IngresarDatos();
        int exponente = IngresarPotencia();

        GenerarMatriz(Orden, MatrizIni.matriz);

        system("cls||clear");

        cout << "\nMatriz Inicial\n";
        PresentarMatriz(Orden, MatrizIni.matriz);

        // Calcular la potencia de la matriz
        PotenciaMatriz(Orden, exponente, MatrizIni.matriz, MatrizR.matriz);

        cout << "\nMatriz R (Resultado de A^" << exponente << ")\n";
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

int IngresarPotencia() {
    int exponente;
    cout << "Ingrese el exponente al que desea elevar la matriz: ";
    cin >> exponente;
    return exponente;
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

void CopiarMatriz(int Orden, int MatrizOrigen[][10], int MatrizDestino[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            MatrizDestino[i][j] = MatrizOrigen[i][j];
        }
    }
}

void MultiplicarMatrices(int Orden, int MatrizA[][10], int MatrizB[][10], int MatrizR[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            MatrizR[i][j] = 0;
            for (int k = 0; k < Orden; k++) {
                MatrizR[i][j] += MatrizA[i][k] * MatrizB[k][j];
            }
        }
    }
}

void PotenciaMatriz(int Orden, int exponente, int MatrizA[][10], int MatrizR[][10]) {
    if (exponente == 0) {
        // Si el exponente es 0, la matriz resultante es la matriz identidad
        for (int i = 0; i < Orden; i++) {
            for (int j = 0; j < Orden; j++) {
                MatrizR[i][j] = (i == j) ? 1 : 0;
            }
        }
    } else {
        CopiarMatriz(Orden, MatrizA, MatrizAux.matriz); // MatrizAux = MatrizA
        for (int p = 1; p < exponente; p++) {
            MultiplicarMatrices(Orden, MatrizAux.matriz, MatrizA, MatrizR);
            CopiarMatriz(Orden, MatrizR, MatrizAux.matriz); // Actualizar MatrizAux con el resultado
        }
    }
}
