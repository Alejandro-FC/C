/* Ej 6: escriba un programa que calcule x^y, donde tanto x como y son
enteros positivos, sin utilizar la función pow. */

#include <iostream>

using namespace std;

int main(){

    int x, y, resultado=1;

    cout<<"\nIntroduce un valor de x: ";cin>>x;
    cout<<"\nIntroduce un valor de y: ";cin>>y;

    for(int i=1; i<=y; i++){

        resultado = resultado * x;
    }

    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}