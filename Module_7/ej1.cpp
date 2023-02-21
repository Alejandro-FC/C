/* Ej 1: hacer un programa que pida al usuario que digite una cadena de caracteres. Luego, verificar la
longitud de la cadena y si esta supera a 10 caracteres mostrarla en pantalla. En caso contrario no
mostrarla */


#include<iostream>
#include<string.h>

using namespace std;


int main(){

    char palabra[50];
    int longitud=0;

    cout<<"\nEscriba una frase: "; 
    cin.getline(palabra, 50, '\n');

    longitud = strlen(palabra);

    if(longitud>=10){
        cout<<palabra<<endl;
    }
    else{
        cout<<"\nLa frase es demasiado corta (<10 caracteres)"<<endl;
    }
    



    return 0;
}