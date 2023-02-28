/*Ej 5: hacer 2 estructuras: una llamada promedio que tenga los campos: nota1,nota2,nota3; y otra llamada
alumno que tenga los campos: nombre, sexo, edad. Hacer que la estructura promedio este anidada en la estructura 
alumno, luego pedir todos los datos para un alumno, calcular su promedio y, por último, imprimir todos los datos
incluido el promedio */

#include<iostream>

using namespace std;

struct promedio{

    float nota1;
    float nota2;
    float nota3;
};

struct alumno{

    char nombre[10];
    char genero[10];
    int edad;
    struct promedio media;
}alumno1;



int main(){

    float nota_media;


    cout<<"\nIntroduzca el nombre: "<<endl;
    cin.getline(alumno1.nombre, 10,'\n');
    cin.ignore();
    cout<<"\nIntroduzca el género: "<<endl;
    cin.getline(alumno1.genero, 10, '\n');
    cin.ignore();
    cout<<"\nIntroduzca la edad: "<<endl;
    cin>>alumno1.edad;

    cout<<"\nIntroduzca la nota1: "<<endl;
    cin>>alumno1.media.nota1;
    cout<<"\nIntroduzca la nota2: "<<endl;
    cin>>alumno1.media.nota2;
    cout<<"\nIntroduzca la nota3: "<<endl;
    cin>>alumno1.media.nota3;

    nota_media=(alumno1.media.nota1 + alumno1.media.nota2 + alumno1.media.nota3)/3;

    cout<<"\nEl nombre es: "<<alumno1.nombre<<endl;
    cout<<"\nEl genero es: "<<alumno1.genero<<endl;
    cout<<"\nLa edad es: "<<alumno1.edad<<endl;
    cout<<"\nEl promedio es: "<<nota_media<<endl;
    



    return 0;
}