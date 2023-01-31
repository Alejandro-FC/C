/*Ej 7: escribe un programa que calcule el valor de 1+2+3+...+n */

#include<iostream>

using namespace std;

int main(){

    int numero, suma=0;

    cout<<"\nIntroduce un número: ";cin>>numero;

    for(int i=1; i<=numero; i++){

        suma=suma+i;
    }

    cout<<"\nEl valor de la suma es: "<<suma<<endl;

    return 0;
}