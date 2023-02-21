// Ej 2: Pedir al usuario una cadena de caracteres, almacenarla en un arreglo 
// y copiar todo su contentido a otro arreglo de caracteres

#include<iostream>
#include<string.h>

using namespace std;


int main(){

    char palabra[100], palabra2[100];

    cout<<"\nIntroduce una cadena de caracteres: "<<endl; 
    cin.getline(palabra, 100, '\n');

    strcpy(palabra2,palabra);

    cout<<palabra2<<endl;   



return 0;
}