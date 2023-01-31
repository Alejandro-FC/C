/* Ej 3: realice un programa que calcule y muestre en la salida estándar la suma 
de los cuadrados de los 10 primeros enteros mayores que 0 */

#include<iostream>


using namespace std;

int main(){

    int suma=0, cuadrado;

    for(int num=1;num<=10;num++){
    
        cuadrado = num * num;
        suma += cuadrado; //suma = suma +cuadrado 

    }

    cout<<"\nLa suma de los cuadrados de los 10 primeros enteros es: "<<suma<<endl;
    return 0;
}