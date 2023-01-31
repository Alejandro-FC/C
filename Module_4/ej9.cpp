/*Ej 9: Escribe un programa que calcule el valor de: 1*2*3*4...*n (factorial de un numero) */

#include <iostream>

using namespace std;


int main(){

    int numero, resultado=1;

    cout<<"\nIntroduce un número: "; cin>>numero;

    for(int i=1; i<=numero; i++){

        resultado = resultado * i;

    }

    cout<<"\nEL resultado es: "<<resultado<<endl;


    return 0;
}