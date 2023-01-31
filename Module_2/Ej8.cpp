//Escriba un programa que lea la entrada estandar de dos catetos de un
// triángulo rectángulo y escriba en la salida estandar su hipotenusa

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a,b,h ;

    cout<<"Medida del primer cateto: "; cin>>a;
    cout<<"Medida del segundo cateto: "; cin>>b;

    h = sqrt(pow(a,2)+pow(b,2));

    cout.precision(3)
    cout<<"\nLa hipotenusa es: "<<h<<endl;


    return 0;
}