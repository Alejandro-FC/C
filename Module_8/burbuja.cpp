//Método burbuja

#include<iostream>

using namespace std;


int main(){

    int numeros[] = {4,5,2,3,1};
    int i,j,aux;

    //Algoritmo método burbuja

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    cout<<"\nOrden ascendente: "<<endl;

    for(i=0;i<5;i++){
        cout<<numeros[i]<<" "<<endl;
    }

    return 0;
}