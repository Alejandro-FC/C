/* Hacer un programa que simule un cajero automático
con un saldo inicial de 1000 */

#include <iostream>

using namespace std;

int main(){

    int saldo_inicial = 1000, opc;
    float ingreso, saldo = 0, retiro;

    cout<<"\tBienvenido al Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "; cin>>opc;


    switch(opc){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar: "; cin>>ingreso;
            saldo = saldo_inicial + ingreso;
            cout<<"\nDinero en cuenta: "<<saldo<<endl;break;
        case 2:
            cout<<"Digite la cantidad de dinero a retirar: "; cin>> retiro;
            if (retiro > saldo_inicial){
                cout<<"No tiene esa cantidad de dinero"<<endl;
            }
            else{
                saldo = saldo_inicial - retiro;
                cout<<"Dinero en cuenta: "<< saldo<<endl; break;

            }
        case 3: break;
    }



    return 0;
}