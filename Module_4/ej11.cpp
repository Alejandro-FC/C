/*Escribe un programa que calcule el valor de: 2¹+2²+2³+...+2^n */


#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int exp, suma=0;

    cout<<"\nIntroduce el exponente: "; cin>>exp;

    for(int i=1; i<=exp; i++){

        suma = suma + pow(2,i);

    }

    cout<<"\nEl resultado es: "<<suma<<endl;

    return 0;
}