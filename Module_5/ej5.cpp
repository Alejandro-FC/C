/*Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el
mayor elemento del vector */

#include<iostream>

using namespace std;

int main(){

    int numeros[100], n , mayor = 0;

    cout<<"\nDigite el número de elementos del vector: ";
    cin>>n;


    for(int i=0; i<n; i++){

        cout<<i+1<<". Digite un número: ";
        cin>>numeros[i];

        if(numeros[i] > mayor){

            mayor = numeros[i];
        }
        
    }

    cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;


    return 0;
}