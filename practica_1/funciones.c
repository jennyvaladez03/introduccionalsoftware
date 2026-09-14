#include "funciones.h"


int calcularCons(int n){
    return (n *((n * n) + 1))/ 2;
}

void sumarColumna(int n, int matriz [5][5], int col){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += matriz [i][col];
    }
    return suma;
}

void sumarRenglon(int n, nt matriz [5][5], int ren){
    int suma = 0;
    for(int j = 0; j < n; j++){
        suma += matriz [ren][j];
    }
    return suma;
}

void sumarDiaogonalIni(int n, int matriz [5][5]){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += matriz [i][i];
    }
    return suma;
}

void sumarDiagonalFin(int n, int matriz [5][5]){
    nt suma = 0;
    for(int i = 0; i < n; i++){
        suma += matriz [i][n - 1 - i];
    }
    return suma;
}