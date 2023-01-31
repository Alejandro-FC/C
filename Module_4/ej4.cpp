/*Ej 4: escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
Calucle la temperatura media del día, la temperatura más alta y la más baja */

#include <iostream>

using namespace std;

int main(){

    float temperatura, mayor=0, menor=99999;
    float sumaTemp = 0, media;

    for(int i=0; i<24; i+=4){

        cout<<"\nIntroduce la temperatura de la hora "<<i<<": "; cin>>temperatura;
        sumaTemp = sumaTemp + temperatura;

        if(temperatura > mayor){
            mayor = temperatura;
        }
        if(temperatura < menor){
            menor = temperatura;
        }

    }

    media = sumaTemp/6;

    cout<<"\nLa temperatura media es: "<<media<<endl;
    cout<<"\nLa tempertura máxima es: "<<mayor<<endl;
    cout<<"\nLa temperatura mínima es: "<<menor<<endl;



    return 0;
}