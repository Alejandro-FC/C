/* Ej1: Hacer una estructura llamada corredor que tenga los siguientes campos: Nombre, edad, sexo, club. Pedir los datos para un corredor y
asignarle una categoria de competición:
-Juvenil <= 18 años
-Señor <= 40 años
-Veterano > 40 años
Posteriormente, imprimir todos los datos del corredor así como su categoría de competición */


#include<iostream>
#include<cstring>

using namespace std;

struct corredor{

    char nombre[10];
    int edad;
    char sexo[10];
    char club[20];


}deportista;


int main(){

    char categoria[20];

    cout<<"\nDigite su nombre: "<<endl;
    cin.getline(deportista.nombre, 10, '\n');
    cout<<"\nDigite su edad: "<<endl;
    cin>>deportista.edad;
    fflush(stdin);
    cout<<"\nDigite su sexo: "<<endl;
    cin.getline(deportista.sexo, 10, '\n');
    cout<<"\nDigite su club: "<<endl;
    cin.getline(deportista.club, 20, '\n');


    if(deportista.edad<=18){
        strcpy(categoria,"Juvenil");
    }
    else if((deportista.edad>18)&&(deportista.edad<=40)){
        strcpy(categoria,"Señor");
    }
    else if(deportista.edad>40){
        strcpy(categoria,"Veterano");
    }

    cout<<"\nNombre: "<<deportista.nombre<<endl;
    cout<<"\nEdad: "<<deportista.edad<<endl;
    cout<<"\nGénero: "<<deportista.sexo<<endl;
    cout<<"\nClub: "<<deportista.club<<endl;
    cout<<"\nCategoría: "<<categoria<<endl;



    return 0;
}