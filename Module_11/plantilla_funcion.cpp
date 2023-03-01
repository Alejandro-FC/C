/*Plantillas de función:

Ejemplo: sacar el valor absoluto de un número */

#include<iostream>

using namespace std;


//Prototipo de función:

template <class TIPOD>
void valorAbs(TIPOD numero);

int main(){

    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    valorAbs(num1);
    valorAbs(num2);
    valorAbs(num3);


    return 0;
}

template <class TIPOD>
void valorAbs(TIPOD numero){
    if(numero<0){
        numero = numero * -1;
    }

    cout<<"\nEl valor absoluto del número es: "<<numero<<endl;
}