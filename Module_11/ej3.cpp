/*Ej 3: escriba una función nombrada funpot() que eleve un numero entero que se le transmita a una
potencia de un número entero positivo y despliegue el resultado. EL número entero positivo deberá ser
el segundo valor transmitido a la función */

#include<iostream>

using namespace std;

void datos();
void funpot(int base, int exponente);

int base, exponente;

int main(){

    datos();
    funpot(base, exponente);


    return 0;
}

void datos(){
    cout<<"\nDigite la base de la potencia: "<<endl;
    cin>>base;
    cout<<"\nDigite el exponente de la potencia: "<<endl;
    cin>>exponente;
}

void funpot(int x, int y){
    long resultado=1 ;

    for(int i=1; i<=y; i++){

        resultado = resultado * x;

    }
    

    cout<<"\nEl resultado es: "<<resultado<<endl;
}

