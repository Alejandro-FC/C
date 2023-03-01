//Ejemplo de funcion; encontrar el mayor de dos numeros:

#include<iostream>

using namespace std;

//Prototipo de función:
int encontrarMax(int x, int y);


//FUnción principal:

int main(){

    int n1, n2;
    int mayor;

    cout<<"\nDigite dos números: "; cin>>n1>>n2;

    mayor = encontrarMax(n1,n2);

    cout<<"\nEl mayor de los dos números es: "<<mayor<<endl;
    
    return 0;
}

//Definición de la función:

int encontrarMax(int x, int y){

    int n_max=0;

    if(x>y){
        n_max = x;
    }
    else{
        n_max=y;
    }

    return n_max;

}