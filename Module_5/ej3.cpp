/* Ej 3: escribe un programa que lea de la entrada estandar un vector de números y
muestre en la salida estandar los números del vector con sus índices asociados */


#include <iostream>

using namespace std;

int main(){

    int numeros[100], n;

    cout<<"\nDigite el número de elementos que tiene el arreglo: "; cin>>n;

    for (int i=0; i<n ; i++){

        cout<<"Digite un número: ";cin>>numeros[i];

        
        }


    for (int i=0; i<n; i++){

        cout<<i<< " -> "<<numeros[i]<<endl;
    }

    return 0;
}