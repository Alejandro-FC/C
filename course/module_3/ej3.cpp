/* Ej 3: realice un programa que lea un valor entero y 
determine si se trata de un numero par o impar*/

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Escribe un numero entero: ";cin>>numero;

    if(numero==0){
        cout<<"El numero es 0"<<endl;
    }
    else if(numero%2==0){
        cout<<"\nEL número es par"<<endl;
    }
    else{
        cout<<"\nEl numero es impar"<<endl;
    }


    return 0 ;
}