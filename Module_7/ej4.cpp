/* Ej 4: Crear una cadena que tenga la siguiente frase: "Hola que tal", luego crear otra cadena
para preguntarle al usuario su nombre. Por último, añadir el nombre al final de la primera cadena
y mostrar el mensaje completo: "HOla que tal (Nombre)" */


#include<iostream>
#include<string.h>

using namespace std;


int main(){

    char cad1[] = "Hola que tal ", cad2[20];

    cout<<"\nIntroduce tu nombre: "<<endl;
    cin.getline(cad2, 20,'\n');

    strcat(cad1, cad2);

    cout<<cad1<<endl;



    return 0;
}