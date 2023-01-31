/*Ej 12: hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6...n */

#include <iostream>

using namespace std;

int main(){

    int numero, suma=0;

    cout<<"\nEscribe un número: ";cin>>numero;

    for(int i=1; i<=numero; i++){

        if(i % 2 != 0){
            suma += i;
        }
        else{
            suma -= i;
        }

    }

    cout<<"\nLa suma es: "<<suma<<endl;


    return 0;
}