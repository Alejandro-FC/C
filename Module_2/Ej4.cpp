

#include <iostream>

using namespace std;

int main(){

    float a,b,c,d, resultado = 0;

    cout<<"\Escriba el valor de a: "; cin>>a;
    cout<<"\Escriba el valor de b: "; cin>>b;
    cout<<"\Escriba el valor de c: "; cin>>c;
    cout<<"\Escriba el valor de d: "; cin>>d;

    resultado = (a + (b/(c-d)));

    cout.precision(3);
    cout<<"\El resultado es: "<<resultado<<endl;



    return 0;
}