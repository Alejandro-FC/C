//Cadenas de carcateres

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char palabra[] = "Alejandro";
    char palabras[]={'A','l','e','j','a','n','d','r','o'};
    char nombre[30];

    cout<<"\nEscriba su nombre: "; 
    // cin>>nombre; No usar cin para cadenas de caracteres

    cin.getline(nombre, 30,'\n');

    cout<<nombre<<endl;



    return 0;
}

