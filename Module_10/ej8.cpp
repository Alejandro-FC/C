/*Ej 8: Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: nombre
de la persona y un valor lógico que indica si la persona tiene algún tipo de discapacidad. Realice un programa que dado un
vector de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen ninguna discapacidad y otro que 
contenga las personas con discapacidad */

#include<iostream>
#include<cstring>

using namespace std;

struct Personas{

    char nombre[20];
    bool discapacidad;

}personas[100], personasSinD[100], personasConD[100];

int main(){

    int n_personas, j=0, k=0;
    cout<<"\nIndique el número de personas: "<<endl; cin>>n_personas;

    for(int i=0;i<n_personas;i++){
        cout<<"\nDigite el nombre: "<<endl;
        cin.getline(personas[i].nombre, 20, '\n');
        cout<<"Existe algún tipo de discapacidad? (1/0): "<<endl;
        cin>>personas[i].discapacidad;

        if(personas[i].discapacidad == 1){
            strcpy(personasConD[j].nombre, personas[i].nombre);
            j++;

        }
        else{
            strcpy(personasSinD[k].nombre, personas[i].nombre);
            k++;
        }
    }

    cout<<"\nPersonas sin discapacidad: "<<endl;
    for(int i=0; i<k;i++){
        cout<<personasSinD[i].nombre<<endl;
    }
    cout<<"\nPersonas con discapacidad: "<<endl;
    for(int i=0; i<j;i++){
        cout<<personasConD[i].nombre<<endl;
    }



    return 0;
}