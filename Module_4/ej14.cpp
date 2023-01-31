/*  Ej 14: en una clase de 5 alumnos se han realizado 3 exámenes y se requiere
determinar el numero de:

    a)Alumnos que aprobaron todos los exámenes
    b)Alumnos que aprobaron al menos un examen
    c)Alumnos que aprobaron el último examen

Realice un programa que permita la lectura de los datos y el cálculo de las stats
*/

#include<iostream>
//include<conio.h>

using namespace std;

int main(){

    float e1,e2,e3 ;
    int aprobadotodo=0, aprobadouno=0, aprobadoultimo=0;

    for(int i=1; i<=5; i++){

        cout<<i<<"Digite la nota del primer examen: "; cin>>e1;
        cout<<i<<"Digite la nota del segundo examen: "; cin>>e2;
        cout<<i<<"Digite la nota del tercer examen: "; cin>>e3;

        cout<<"\n";

        if((e1>5.0)&&(e2>5.0)&&(e3>5.0)){
            aprobadotodo++;
        }
        if((e1>5.0)||(e2>5.0)||(e3>5.0)){
            aprobadouno++;
        }
        if((e1<5.0)&&(e2<5.0)&&(e3>5.0)){
            aprobadoultimo++;
        }

    }

    cout<<"\nAlumnos que aprobaron todos los exámenes: "<<aprobadotodo<<endl;
    cout<<"\nAlumnos que aprobaron al menos un examen: "<<aprobadouno<<endl;
    cout<<"\nAlumnos que aprobaron el último examen: "<<aprobadoultimo<<endl;


    return 0;
}

