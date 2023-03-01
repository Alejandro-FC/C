/*Ej7: Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe
tener tres campos: horas, minutos, segundos. Escribe un programa que dado n etapas calcule el tiempo total empleado
en correr todas las etapas */

#include<iostream>

using namespace std;

struct Etapas{

    int horas;
    int minutos;
    int segundos;

}et[100];


int main(){

    int n_etapas, horasT=0, minutosT=0, segundosT=0;

    cout<<"\nDigite el numero de etapas: "<<endl;
    cin>>n_etapas;

    for(int i=0;i<n_etapas;i++){

        cout<<"\nHoras: "<<endl;
        cin>>et[i].horas;
        cout<<"\nMinutos: "<<endl;
        cin>>et[i].minutos;
        cout<<"\nSegundos: "<<endl;
        cin>>et[i].segundos;

        horasT = horasT + et[i].horas;
        minutosT = minutosT + et[i].minutos;
        if(minutosT>=60){
            minutosT -= 60;
            horasT++;
        }
        segundosT = segundosT + et[i].segundos;
        if(segundosT>=60){
            segundosT -= 60;
            minutosT++;
        }


    }

    cout<<"\nTiempo total empleado: "<<endl;
    cout<<"\nHoras: "<<horasT<<endl;
    cout<<"\nMinutos: "<<minutosT<<endl;
    cout<<"\nSegundos: "<<segundosT<<endl;



    return 0;
}