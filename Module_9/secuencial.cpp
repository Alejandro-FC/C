//Busqueda secuencial

#include<iostream>

using namespace std;


int main(){

    int a[]={3,4,2,1,5};
    int i, dato;
    char band = 'F';

    //Busqueda sequencial:

    i=0;
    dato = 4;

    while((band == 'F') && (i<5)){

        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"\nEl numero buscado no existe en el arreglo."<<endl;
    }
    else if(band == 'V'){
        cout<<"\nEl numero ha sido encontrado en la posicion: "<<i-1<<endl;
    }

    return 0;
}