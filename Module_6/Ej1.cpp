/*Ej1: Hacer un programa para rellear una matriz pidiendo al ususario el número de filas y
columnas. Posteriormente, mostrar la matriz en pantalla. */

#include<iostream>

using namespace std;

int main(){

    int matriz[100][100] , filas, columnas ;

    cout<<"\nDigite el numero de filas: "; cin>>filas;
    cout<<"\nDigite el numero de columnas: "; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"\nDIgite un numero["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];

        }
    }

    for(int i=0;i<filas;i++){
        for(int j=0; j<columnas; j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }

    return 0;
}