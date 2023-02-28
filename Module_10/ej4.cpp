/*Ej 4: hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, pais y numero_medallas
y devuelva los datos (Nombre, pais) del atleta que ha ganado el mayor número de medallas. */

#include<iostream>

using namespace std;

struct Atletas{

    char nombre[10];
    char pais[10];
    int n_med;
}atletas[100];

int main(){

    int n_atletas, med = 0, pos=0;

    cout<<"\nDigite el numero de atletas: "<<endl;
    cin>>n_atletas;

    for(int i=0;i<n_atletas;i++){
        cout<<"\nDigite el nombre: "<<endl;
        cin.getline(atletas[i].nombre,10,'\n');
        cin.ignore();
        cout<<"\nDigite el pais: "<<endl;
        cin.getline(atletas[i].pais, 10, '\n');
        cin.ignore();
        cout<<"Digite el número de medallas: "<<endl;
        cin>>atletas[i].n_med;

        if(med<atletas[i].n_med){
            med = atletas[i].n_med;
            pos = i;
        }
    }

    cout<<"\nNombre del atleta con mayor número de medallas: "<<atletas[pos].nombre<<endl;
    cout<<"\nPais del atleta: "<<atletas[pos].pais<<endl;


    return 0;
}