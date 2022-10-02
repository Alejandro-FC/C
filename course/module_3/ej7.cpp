/* Escribe un programa que lea la entrada estandar de
tres números. Después, debe leer un cuarto número e 
indicar si el número coincide con alguno de los 
introducidos con anterioridad */

#include<iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4;

    cout<<"\nEscribe un número: "; cin>>n1;
    cout<<"\nEscribe otro número: "; cin>>n2;
    cout<<"\nEscribe otro número: "; cin>>n3;
    cout<<"\nEscribe otro número: "; cin>>n4;

    if ((n4 == n1) || (n4 == n2) || (n4==n3)){
        cout<<"\nEl numero "<<n4<<" es igual a otro de los números"<<endl;
    }   
    else{
        cout<<"\nEl numero es diferente al resto"<<endl;
    }

 
    return 0;
}