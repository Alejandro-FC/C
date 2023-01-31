/*Ej 2: realice un programa que lea de la entrada estandar números hasta que 
introduzca un 0. En ese momento, el programa debe terminar y mostrar en la
salida estándar el número de valores mayores que cero leidos*/

#include<iostream>

using namespace std;

int main(){

    int numero, conteo = 0;

    do{
    
        cout<<"\nIntroduce un número: "; cin>>numero;
        if(numero>0){
            conteo++;
        }


    }while(numero != 0);


    cout<<"\nEl número de valores mayores a 0 introducidos es: "<<conteo<<endl;
    

    return 0;
}