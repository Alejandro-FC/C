//Ej 4: comprobar si un numero es positivo o negativo

#include <iostream>

using namespace std;

int main(){
    float numero;

    cout<<"\nEscribe un número: "; cin>>numero;

    if(numero==0){
        cout<<"\nEl numero es 0"<<endl;
    }
    else if(numero>0){
        cout<<"\nEl numero es positivo"<<endl;
    }
    else{
        cout<<"\nEl numero es negativo"<<endl;
    }



    return 0;
}