/*Ej 8: escribe un programa que calcule el valor de: 1+3+5+...+2n-1 */

#include<iostream>

using namespace std;


int main(){

    int numero, dato=0, suma=0;

    cout<<"\nIntroduce un número: "; cin>>numero;

    for(int i=1; i<=numero; i++){

        dato = 2 * i -1;
        suma = suma + dato;

    }

    cout<<"\nLa suma es: "<<suma<<endl;

    return 0;
}