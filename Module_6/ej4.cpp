/*Ej4: hacer una matriz preguntando al ususario el número de filas y columnas,
llenarla de números aleatorios, copiar el contenido en otra matriz y mostrarla
por pantalla */


#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){

    int matriz1[100][100], matriz2[100][100], filas, columnas, dato;

    cout<<"\nDigite el número de filas: "; cin>>filas;
    cout<<"\nDigite el número de columnas: ";cin>>columnas;

    srand(time(NULL)); 

    //Rellenando la matriz con numeros aleatorios

    for(int i=0;i<filas;i++){
        for(int j=0; j<columnas; j++){
             
            dato = 1 + rand()%(100); // generando números aleatorios entre 1 y 100
            matriz1[i][j] = dato;
        }
        cout<<"\n";
    }

    //Copiar el contenido a otra matriz

    for(int i=0; i<filas;i++){
        for(int j=0; j<columnas; j++){
            matriz2[i][j]=matriz1[i][j];

        }
    }

    //Imprimiendo matriz2 en pantalla

    for(int i=0; i<filas;i++){
        for(int j=0; j<columnas; j++){
            
            cout<<matriz2[i][j]<<" ";

        }
        cout<<"\n";
    }


    return 0;
}