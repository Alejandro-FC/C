/* Ej 2: escribe un programa que defina un vector de números y calcule la
multiplicación acumulada de sus elementos */


#include<iostream>

using namespace std;

int main(){

    int numeros[5] = {1,2,3,4,5};
    int multiplicacion=1;

    for (int i=0; i<5; i++){

        multiplicacion = multiplicacion * numeros[i];

    }

    cout<<"\nEL resultado es: "<<multiplicacion<<endl;

    return 0;
}