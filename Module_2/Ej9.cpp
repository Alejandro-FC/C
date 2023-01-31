/* Realice un programa que calcule el valor que toma la siguiente
función para valores de x e y */

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float x,y, f;

    cout<<"\nIntroduce el valor de x: ";cin>>x;
    cout<<"\nIntroduce el valor de y: "; cin>>y;

    f= (sqrt(x))/(pow(y,2) - 1);

    cout<<"\nEl resultado es: "<<f<<endl;
    


    return 0;
}