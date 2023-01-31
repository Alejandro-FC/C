/*Ej 10: escribe un programa que calcule el valor de: 1! + 2! + 3! +...+n! */


#include <iostream>

using namespace std;


int main(){

    int numero, factorial=1, suma=0;

    cout<<"\nIntroduce un número: ";cin>>numero;

    for(int i=1; i<=numero; i++){

        factorial *= i;
        suma += factorial;

    }

    cout<<"\nLa suma es: "<<suma<<endl;


    return 0;
}