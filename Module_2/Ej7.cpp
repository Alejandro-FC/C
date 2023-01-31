/*La calificación final de un estudiante es el promedio de tres notas:
    -La nota de prácticas, que cuenta un 30% del total.
    -La nota teórica que cuenta un 60% del total.
    -La nota de participación, que cuenta el 10% del total;
    
Escriba un programa que lea las tres notas del alumno y escriba su nota final*/

#include <iostream>

using namespace std;

int main(){

    float n_practicas, n_teorica, n_part, n_final ;

    cout<<"Introduzca la nota de prácticas: "; cin>>n_practicas;
    cout<<"Introduzca la nota teórica: "; cin>>n_teorica;
    cout<<"Introduzca la nota de participación: "; cin>>n_part;

    n_final = (n_practicas * 0.3) + (n_teorica * 0.6) + (n_part * 0.1);

    cout<<"La nota final es: "<<n_final<<endl;

    



    return 0;
}