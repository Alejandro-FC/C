/*Ej 6: escribe un programa que solicite una edad e indique en la
salida estandar si la edad introducida está en el rango
[18-25] */

#include <iostream>

using namespace std;

int main(){

    int edad;

    cout<<"Introduce tu edad: ";cin>>edad;


    if((18<= edad) && (edad<=25)){
        cout<<"\nSe encuentra en el rango [18-25]"<<endl;
    }
    else{
        cout<<"\nNo se encuentra en el rango [18-25]"<<endl;
    }

    return 0 ;
}