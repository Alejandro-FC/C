/*Ej5: escriba una plantilla de función llamada despliegue() que despliegue el valor del argumento único que
se le transmite cuando es invocada la función */

#include<iostream>

using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main(){

    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.71245;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);


    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){

    cout<<"\nEl dato es: "<<dato<<endl;

}