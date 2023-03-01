/*Ej6: escriba una plantilla de funcion llamada maximo() que devuelva el valor máximo de tres argumentos que se transmitan 
a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de dato */

#include<iostream>

using namespace std;

template <class T>
T maximo(T dato1, T dato2, T dato3);

int main(){


    float dato1 = 4.56, dato2 = 6.56, dato3 = 8.26;
    cout<<"\nEl máximo valor es: "<<maximo(dato1,dato2,dato3)<<endl;




    return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3){
    T max;
    
    if((dato1>=dato2) && (dato1>=dato3)){
        max = dato1;
    }
    else{
        if((dato2>=dato1)&&(dato2>=dato3)){
            max= dato2;
        }
        else{
            max = dato3;
        }
    }

    return max;
}