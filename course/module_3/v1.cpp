/* La sentencia if

    if(condicion){
        Instrucciones 1;
    }
    else{
        Instrucciones 2;
    }
*/


#include<iostream>

using namespace std;

int main(){
    int numero, dato =5;

    cout<<"\nDigite un numero: "; cin>>numero;

    if(numero == dato){
        cout<<"El número es 5"<<endl;
    }
    else{
        cout<<"El número es distinto de 5"<<endl;
    }


    return 0;
}