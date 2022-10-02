/*EJ1: escriba un programa que lea dos numeros y 
determine cual de ellos es el mayor */

#include<iostream>

using namespace std;

int main(){

    int a,b;

    cout<<"\nEscriba un número: "; cin>>a;
    cout<<"\nEscriba otro número: "; cin>>b;

    if(a==b){
        cout<<"\nAmbos números son iguales"<<endl;
    }
    else if (a>b){
        cout<<a<<" es mayor que "<<b<<endl;
    }
    else{
        cout<<a<<" es menor que "<<b<<endl;
    }


    return 0;
}