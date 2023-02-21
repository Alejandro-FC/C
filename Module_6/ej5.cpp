/* Ej 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta */


#include<iostream>

using namespace std;


int main(){

    int matriz[3][3], matriz2[3][3];

    //Creando la matriz original:

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            cout<<"\nDigite un número ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    //Imprimiendo la matriz original:

    cout<<"\nMatriz original: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";

        }
        cout<<"\n";
    }

    //Creando la matriz traspuesta: 

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz2[i][j] = matriz[j][i];

        }
    }

    //Imprimiendo la matriz traspuesta:
    cout<<"\nMatriz traspuesta: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<" ";

        }
        cout<<"\n";
    }





    return 0;
}