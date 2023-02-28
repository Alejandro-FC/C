/*Ej3: realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa
y que imprima los datos del empleado con mayor y menor salario */

#include<iostream>

using namespace std;

struct Empleado{

    char nombre[20];
    float salario;
}emp[100];

int main(){

    int n_empleados, posM=0,posm=0;
    float mayor=0, menor=999999;

    cout<<"\nIndique el número de empleados: "<<endl;
    cin>>n_empleados;

    for(int i=0;i<n_empleados;i++){

        cout<<"\nDigite el nombre: "<<endl;
        cin.getline(emp[i].nombre,20,'\n');
        cin.ignore();
        cout<<"\nDigite el salario: "<<endl;
        cin>>emp[i].salario;


        if(emp[i].salario>mayor){
            mayor = emp[i].salario;
            posM = i;
        }
        if(emp[i].salario<menor){
            menor = emp[i].salario;
            posm = i;
        }


        cout<<"\n";

    }

    cout<<"Nombre mayor salario: "<<emp[posM].nombre<<endl;
    cout<<"Salario: "<<emp[posM].salario<<endl;
    cout<<"\n";
    cout<<"Nombre menor salario: "<<emp[posm].nombre<<endl;
    cout<<"Salario: "<<emp[posm].salario<<endl;
    cout<<"\n";

    return 0;
}