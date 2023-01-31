/* Realice un programa que solicite al usuario que piense un número entero entre 
el 1 y el 100. EL programa debe generar un número aleatorio en ese mismo rango
[0-100] e indicarle al usuario si el número que digito es menor o mayor al número
aleatorio hasta que lo adivine. Mostrar también el número de intentos.
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

    int numero, dato, contador=0;

    srand(time(NULL)); //genera un número aleatorio
    dato = 1 + rand()%(100);

    do{
        cout<<"\nDigite un número: ";cin>>numero;

        if (numero>dato){
            cout<<"\nDigite un número menor \n";
        }
        if (numero<dato){
            cout<<"\nDigite un número mayor \n";
        }

        contador++;

    }while(numero != dato);

    cout<< "\n FELICIDADES, ADIVINASTE EL NÚMERO \n";
    cout<<"Número de intentos: "<<contador<<endl;

    return 0;
}