/* Ej 2. Escribe un programa que lea de la entrada estandar el precio de un
producto y muestre en la salida estandar el precio del producto al aplicarle
el IVA */

#include<iostream>

using namespace std;

int main(){
    float precio, IVA, valor_final;

    cout<<"Escribe el precio del producto: "; cin >> precio;
    IVA = precio *  21 / 100;
    cout<<"\nEl IVA es del 21%";

    valor_final = precio + IVA;

    cout<<"\nEl valor final es de: " << valor_final <<endl;


    return 0;

}