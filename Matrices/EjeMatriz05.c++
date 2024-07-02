/**
 * @file EjeMatriz4.c++
 * @brief Programa para generar una matriz, presentar la matriz, y calcular su inversa.
 * @version 0.1
 * @date 2024-07-01
 * 
 */

#include <iostream>
#include <stdlib.h>
#include <iomanip> // Para setprecision y setw

using namespace std;

int IngresarDatos();
void GenerarMatriz(int Orden, double Matriz[][10]);
void PresentarMatriz(int Orden, double Matriz[][10]);
void MatrizIdentidad(int Orden, double Matriz[][10]);
bool InversaMatriz(int Orden, double Matriz[][10], double MatrizInversa[][10]);

struct Matriz {
    double matriz[10][10];
} MatrizA, MatrizId, MatrizInv;

int main(int argc, char const *argv[]) {
    system("cls||clear");
    int respuesta;

    do {
        int Orden = IngresarDatos();

        cout << "\t Matriz A" << endl;
        GenerarMatriz(Orden, MatrizA.matriz);
        
        system("@cls||clear");
        cout << "Matriz A\n";
        PresentarMatriz(Orden, MatrizA.matriz);

        cout << "Matriz Identidad\n";
        MatrizIdentidad(Orden, MatrizId.matriz);
        PresentarMatriz(Orden, MatrizId.matriz);

        if (InversaMatriz(Orden, MatrizA.matriz, MatrizInv.matriz)) {
            cout << "Matriz Inversa\n";
            PresentarMatriz(Orden, MatrizInv.matriz);
        } else {
            cout << "La matriz no tiene inversa (determinante es 0).\n";
        }

        cout << "Desea continuar? (0 para salir, 1 para continuar): ";
        cin >> respuesta;
    } while (respuesta != 0);

    return 0;
}

int IngresarDatos() {
    int Orden;
    cout << "\t ===BIENVENIDO===\n";
    cout << "Ingrese el orden de la matriz (n x n): ";
    cin >> Orden;
    return Orden;
}

void GenerarMatriz(int Orden, double Matriz[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            cout << "Ingrese el valor de [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> Matriz[i][j];
        }
    }
}

void PresentarMatriz(int Orden, double Matriz[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            cout << setw(10) << setprecision(5) << Matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void MatrizIdentidad(int Orden, double Matriz[][10]) {
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            Matriz[i][j] = (i == j) ? 1 : 0;
        }
    }
}

bool InversaMatriz(int Orden, double Matriz[][10], double MatrizInversa[][10]) {
    double temp[10][20];

    // Crear una matriz aumentada con la matriz original y la matriz identidad
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            temp[i][j] = Matriz[i][j];
            temp[i][j + Orden] = (i == j) ? 1 : 0;
        }
    }

    // Aplicar el método de Gauss-Jordan
    for (int i = 0; i < Orden; i++) {
        // Buscar el elemento pivote
        if (temp[i][i] == 0) {
            bool esCero = true;
            for (int j = i + 1; j < Orden; j++) {
                if (temp[j][i] != 0) {
                    // Intercambiar filas
                    for (int k = 0; k < 2 * Orden; k++) {
                        swap(temp[i][k], temp[j][k]);
                    }
                    esCero = false;
                    break;
                }
            }
            if (esCero) return false; // No hay inversa si el pivote es cero
        }

        // Hacer que el pivote sea 1
        double pivote = temp[i][i];
        for (int j = 0; j < 2 * Orden; j++) {
            temp[i][j] /= pivote;
        }

        // Hacer ceros en la columna del pivote
        for (int j = 0; j < Orden; j++) {
            if (j != i) {
                double factor = temp[j][i];
                for (int k = 0; k < 2 * Orden; k++) {
                    temp[j][k] -= factor * temp[i][k];
                }
            }
        }
    }

    // Extraer la matriz inversa de la matriz aumentada
    for (int i = 0; i < Orden; i++) {
        for (int j = 0; j < Orden; j++) {
            MatrizInversa[i][j] = temp[i][j + Orden];
        }
    }

    return true;
}
