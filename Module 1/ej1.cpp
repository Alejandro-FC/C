/*1. Escribe un programa que lea la entrada estandar de dos numeros y muestre
en la salida estandar su suma, resta, multiplicación y división */

#include <iostream>

using namespace std;

int main(){
    int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Escribe un numero: "; cin>>n1;
    cout<<"Escribe otro número: "; cin>>n2;

    suma = n1 + n2;
    resta = n1 -n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"/nLa suma es; "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicación es: "<<multiplicacion<<endl;
    cout<<"La división es: "<<division<<endl;
    




    return 0;
}