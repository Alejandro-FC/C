/* Ej 3: Hacer una matriz de tipo entera 2x2, llenarla de números
y luego copiar todo su contenido hacia otra matriz */

#include<iostream>

using namespace std;

int main(){


    int matriz1[2][2]={{1,2},{3,4}};
    int matriz2[2][2];

    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            matriz2[i][j] = matriz1[i][j]; //Pasando el contenido de matriz 1 a matriz 2
        }
    }

    //MOstrando la matriz:
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matriz2[i][j];
        }
        cout<<"\n";
    }
    
    
    return 0;
}