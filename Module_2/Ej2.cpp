//Escribe la siguiente expresión matemática como una expresión en C++

#include <iostream>

using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout<<"\nIntroduce el valor de a: "; cin>>a;
    cout<<"\nIntroduce el valor de b: "; cin>>b;
    cout<<"\nIntroduce el valor de c: "; cin>>c;
    cout<<"\nIntroduce el valor de d: "; cin>>d;

    resultado = (a+b)/(c+d);

    cout.precision(3);
    cout<<"\nEl resultado es: " << resultado << endl;



    return 0;
}

