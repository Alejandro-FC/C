//Estructura básica C++

#include<iostream>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Alejandro", 20},
persona2 = {"Ruperto", 15};


int main(){

    cout<<"\nNombre1: "<<persona1.nombre<<endl;
    cout<<"\nEdad1: "<<persona1.edad<<endl;

    cout<<"\nNombre2: "<<persona2.nombre<<endl;
    cout<<"\nEdad2: "<<persona2.edad<<endl;

    return 0;
}