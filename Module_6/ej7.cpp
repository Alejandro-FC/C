/*Ej 7: Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz
es simetrica si es cuadrada y su traspuesta es igual a la matriz original */


#include<iostream>

using namespace std;

int main(){

    int matriz1[100][100], filas, columnas;
    char band='F';

    cout<<"\nDigite el número de filas: "; cin>>filas;
    cout<<"\nDigite el número de columnas: ";cin>>columnas;


    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"\nDigite un numero["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }

    if(filas==columnas){

        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                if(matriz1[i][j]==matriz1[j][i]){
                    band = 'V';
                }
            }
        }
    }

    if(band=='V'){
        cout<<"\nLa matriz es simétrica.";
    }
    else{
        cout<<"\nLa matriz no es simétrica.";

    }
    






    return 0;
}

