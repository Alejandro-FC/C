/* Ej 3: Pedir al usuario que digite dos cadenas de caracteres e indicar si ambas
cadenas son iguales. En caso de no serlo, indicar cual es mayor alfabeticamente
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char palabra1[20], palabra2[20];

    cout<<"\nIntroduce una palabra: "<<endl;
    cin.getline(palabra1, 20, '\n');
    cout<<"\nIntroduce otra palabra: "<<endl;
    cin.getline(palabra2, 20, '\n');

    if(strcmp(palabra1,palabra2)==0){

        cout<<"\nLas palabras son iguales"<<endl;

    }
    else{

        if(strcmp(palabra1, palabra2) > 0){

            cout<<"\nLa primera palabra es mayor alfabéticamente"<<endl;
        }
        else{
            cout<<"\nLa segunda palabra es mayor alfabéticamente"<<endl;
        }


    }




    return 0;
}