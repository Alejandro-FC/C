/*Ej2: escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y
despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números flotantes */

#include<iostream>

using namespace std;

void valores();
void al_cuadrado(float x);
float numero, resultado;


int main(){

    valores();
    al_cuadrado(numero);


    return 0;
}

void valores(){
    cout<<"\nIntrodudzca un número: "<<endl;
    cin>>numero;
}

void al_cuadrado(float x){
    resultado = x*x;

    cout<<"\nEL cuadrado del número es: "<<resultado<<endl;
    
}