/*Mostrar los meses del año, pidiéndole al usuario un
número entre (1-12) y mostrar el mes que corresponde */

#include <iostream>

using namespace std;

int main(){

    int numero;

    cout<<"Digite un numero del 1 al 12: "<<endl;cin>>numero;

    switch(numero){
        case 1: cout<<"\nEnero"<<endl; break;
        case 2: cout<<"\nFebrero"<<endl;break;
        case 3: cout<<"\nMarzo"<<endl;break;
        case 4: cout<<"\nAbril"<<endl;break;
        case 5: cout<<"\nMayo"<<endl;break;
        case 6: cout<<"\nJunio"<<endl;break;
        case 7: cout<<"\nJulio"<<endl;break;
        case 8: cout<<"\nAgosto"<<endl;break;
        case 9: cout<<"\nSeptiembre"<<endl;break;
        case 10: cout<<"\nOctubre"<<endl;break;
        case 11: cout<<"\nNoviembre"<<endl;break;
        case 12: cout<<"\nDiciembre"<<endl;break;
        default: cout<<"\nNo existe mes para ese numero"<<endl; break;
    }


    return 0;
}