/*Ej 6: utilizar las 2 estructuras del problema 5 pero ahora pedir los datos para N alumnos y calcular cual de todos tiene el mejor promedio e imprimir sus datos */

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
}alumnos[100];



int main(){

    float nota_media[100], mayor=0;
    int n_alumnos, posM=0;

    cout<<"\nIntroduzca el número de alumnos: "<<endl;
    cin>>n_alumnos;

    for(int i=0;i<n_alumnos;i++){

        cout<<"\nIntroduzca el nombre: "<<endl;
        cin.getline(alumnos[i].nombre, 10,'\n');
        cin.ignore();
        cout<<"\nIntroduzca el género: "<<endl;
        cin.getline(alumnos[i].genero, 10, '\n');
        cin.ignore();
        cout<<"\nIntroduzca la edad: "<<endl;
        cin>>alumnos[i].edad;

        cout<<"\nIntroduzca la nota1: "<<endl;
        cin>>alumnos[i].media.nota1;
        cout<<"\nIntroduzca la nota2: "<<endl;
        cin>>alumnos[i].media.nota2;
        cout<<"\nIntroduzca la nota3: "<<endl;
        cin>>alumnos[i].media.nota3;

        nota_media[i]=(alumnos[i].media.nota1 + alumnos[i].media.nota2 + alumnos[i].media.nota3)/3;

    if(nota_media[i] > mayor){
        mayor = nota_media[i];
        posM = i;
    }
    }

    cout<<"\nEl nombre es: "<<alumnos[posM].nombre<<endl;
    cout<<"\nEl genero es: "<<alumnos[posM].genero<<endl;
    cout<<"\nLa edad es: "<<alumnos[posM].edad<<endl;
    cout<<"\nEl promedio es: "<<nota_media[posM]<<endl;
    



    return 0;
}