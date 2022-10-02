/*Hacer un programa que muestre un menu con tres opciones:
    1-Cubo de un número 
    2-Numero par o impar
    3-Salir
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int numero,opc,resultado;

    cout<<"\tBienvenido. Seleccione una opción: "<<endl;
    cout<<"1.-Cubo de un número"<<endl;
    cout<<"2.-Número par o impar"<<endl;
    cout<<"3.-Exit"<<endl;

    cout<<"Seleccione una opción: "<<endl; cin>>opc;

    switch(opc){
        case 1: 
            cout<<"\nIntroduce un número: "; cin>>numero;
            resultado = pow(numero,3);
            cout<<"\nEl resultado es: "<<resultado<<endl; break;
        case 2:
            cout<<"\nIntroduce un numero: "; cin>>numero;
            if(numero%2 == 0){
                cout<<"\nEl número es par"<<endl;
            }
            else{
                cout<<"\nEl numero es impar"<<endl;
            }
            break;
        case 3: break;
    }


    return 0;
}