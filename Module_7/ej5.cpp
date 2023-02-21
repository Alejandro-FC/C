/* Ej 5: Hacer un programa que determine si una palabra es un palíndromo */


#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char palabra[20], palabra2[20];

    cout<<"\nIntroduzca la palabra: "<<endl;
    cin.getline(palabra, 20, '\n');

    strcpy(palabra2, palabra);

    strrev(palabra2);

    if(strcmp(palabra,palabra2)==0){
        cout<<"\nLa palabra es un palíndromo"<<endl; 
    }
    else{
        cout<<"\nLa palabra no es un palíndromo"<<endl;
    }


    return 0;
}