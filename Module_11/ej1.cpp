/*Ej1: escriba una función llamada mult() que acepte dos números flotantes como parámetros, multiplique estos dos números
y despliegue el resultado */

#include<iostream>

using namespace std;

//Prototipos funciones

void pedirDatos();
void mult(float x, float y);
float num1, num2;



int main(){

    pedirDatos();

    mult(num1, num2);



    return 0;
}

void pedirDatos(){

    cout<<"\nDigite dos números: "<<endl;
    cin>>num1>>num2;

}

void mult(float x, float y){
    float multiplicacion = x * y;

    cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
}