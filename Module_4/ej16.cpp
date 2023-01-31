/* Ej 16: Realice un programa que calcule la descoposición en factores primos de 
un número entero */

#include<iostream>

using namespace std;

int main(){

    int numero;

    cout<<"\nDigite un número: "; cin>>numero;

    for(int i=2; numero>1; i++){

        while(numero%i == 0){
            cout<<i<<" "<<endl;
            numero = numero/i;
            
        }
    }

    return 0; 

}