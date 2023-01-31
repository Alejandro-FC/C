/* Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo caracter.
Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar. */

#include <iostream>

using namespace std;

int main(){

    int edad;
    char sexo[10];
    float altura;

    cout<<"\nIntroduzca la edad: "; cin>>edad;
    cout<<"\nIntroduzca el sexo: "; cin>>sexo;
    cout<<"\nIntroduzca la altura (metros): "; cin>>altura;

    cout<<"\nLa edad es: " << edad <<endl;
    cout<<"El sexo es: " << sexo <<endl;
    cout<<"La altura es: " << altura <<endl;





    return 0;
}
