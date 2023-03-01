/*Ej4: escriba un programa que devuelva la parte fraccionaria de cualquier número introducido
por el usuario. Por ejemplo, si se introduce el número 256.879, debería desplegar el número
0.879 */

#include<iostream>

using namespace std;

void datos();
float frac(float x);

float dato;

int main(){


    datos();
    

    cout<<"\nLa parte fraccionaria es: "<<frac(dato)<<endl;


    return 0;
}

void datos(){
     cout<<"\nIntroduzca el número: "<<endl;
     cin>>dato;
}
 
float frac(float x){
    int entero = x;
    float resultado = x - entero;

    return resultado;

}