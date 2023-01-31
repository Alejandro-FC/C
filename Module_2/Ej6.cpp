/* Escribe un programa que lea la nota final de cuatro alumnos
y calcule la nota media de los cuatro alumnos */

#include <iostream>

using namespace std;

int main(){

    float n1,n2,n3,n4,media;

    cout<<"Introduzca la nota del alumno 1: "; cin>>n1;
    cout<<"Introduzca la nota del alumno 2: "; cin>>n2;
    cout<<"Introduzca la nota del alumno 3: "; cin>>n3;
    cout<<"Introduzca la nota del alumno 4: "; cin>>n4;

    media = (n1+n2+n3+n4)/4 ;

    cout<<"\La media de las notas es: "<<media<<endl;


    return 0;
}