/*Ej 6: Escibe un programa que defina un vector de números y calcule si existe algún número en el
vector cuyo valor equivale a la suma del resto de número del vector */

#include<iostream>

using namespace std;

int main(){

    int vector[5] ={1,2,3,4,10};
    int suma = 0, mayor = 0;

    for(int i=0; i<5;i++){

        suma += vector[i];

        if(vector[i] > mayor){

            mayor = vector[i];
        }
    }

    if (mayor == suma-mayor){

        cout<<"\nEl número "<<mayor<<" equivale a la suma de los demás"<<endl;
    }
    else{
        cout<<"\nNo existe ningun número que sea igual a la suma de los demás."<<endl;
    }

    return 0;
}