//1. Escribe la siguiente expresión como expresión en C++

#include <iostream>

using namespace std;

int main(){
    float a,b, resultado = 0;

    cout<<"Escribe el valor de a: "; cin>>a;
    cout<<"Escribe el valor de b: "; cin>>b;

    resultado = (a/b) +1 ;


    cout.precision(2); // Para redondear el resultado a dos decimales
    cout<<"\nEL resultado es: "<< resultado << endl;


    return 0;
}

