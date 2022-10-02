/*Ej 2: escriba un programa que lea 3 números y 
determine cual de ellos es mayor */

#include<iostream>

using namespace std;

int main(){

    int a,b,c;

    cout<<"\nDigite un numero: "; cin>>a;
    cout<<"\nDigite un numero: "; cin>>b;
    cout<<"\nDigite un numero: "; cin>>c;

    if(a>b){
        if(a>c){
            cout<<"\nEl número mayor es: "<<a<<endl;
        }
        else{
            cout<<"\nEl numero mayor es: "<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"\nE'número mayor es: "<<b<<endl;
        }
        else{
            cout<<"\nEL número mayor es: "<<c<<endl;
        }
    }




    return 0;
}