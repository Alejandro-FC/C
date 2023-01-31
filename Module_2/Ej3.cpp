//Escribe la siguiente expresión matemática como una expresión en C++


#include <iostream>

using namespace std;

int main(){

    float a,b,c,d,e,f, resultado = 0;
    cout<<"\Escribe el valor de a: "; cin>>a;
    cout<<"Escribe el valor de b: "; cin>>b;
    cout<<"Escribe el valor de c: "; cin>>c;
    cout<<"Escribe el valor de d: "; cin>>d;
    cout<<"Escribe el valor de e: "; cin>>e;
    cout<<"Escribe el valor de f: "; cin>>f;

    resultado = ((a + (b/c))/(d + (e/f)));

    cout.precision(3);
    cout<<"\El resultado es: " << resultado << endl;


    return 0;
}