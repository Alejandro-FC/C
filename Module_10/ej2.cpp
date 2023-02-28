/*Ej2: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos: nombre,edad, promedio. Pedir los datos
para tres alumnos, comprobar cual de los 3 tiene mejor promedio y posteriormente imprimir los datos del alumno. */

#include<iostream>

using namespace std;

struct alumno{

    char nombre[10];
    int edad;
    float promedio;

}alumnos[3];

int main(){

    float mayor=0;
    int pos;

    for(int i=0;i<3;i++){
        cout<<i+1<<" Digite el nombre: "<<endl;
        cin.getline(alumnos[i].nombre, 10, '\n');
        cout<<i+1<<" Digite la edad: "<<endl;
        cin>>alumnos[i].edad;
        cout<<i+1<<" Digite el promedio: "<<endl;
        cin>>alumnos[i].promedio;
        cout<<"\n";


    if(alumnos[i].promedio > mayor){
        mayor = alumnos[i].promedio;
        pos = i;
    }


    }

    cout<<"Nombre del alumno: "<<alumnos[pos].nombre<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<alumnos[pos].promedio<<endl;






    return 0;
}