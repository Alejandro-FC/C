//Estructuras anidadas:

#include<iostream>

using namespace std;

struct info_direccion{

    char direccion[30];
    char ciudad[20];
    char provincia[20];

};

struct empleado{

    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];



int main(){

    for(int i=0;i<2;i++){
        fflush(stdin); //Vacia el buffer
        cout<<"\nDigite su nombre: "<<endl;
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"\nDigite su dirección: "<<endl;
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
        cout<<"\nDigite la ciudad: "<<endl;
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
        cout<<"\nDigite la provincia: "<<endl;
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
        cout<<"\nDigite el salario: "<<endl;
        cin>>empleados[i].salario;
        cout<<"\n";
    }

    //Imprimiendo los datos:

    for(int i=0;i<2;i++){

        cout<<"\nNombre del empleado: "<<empleados[i].nombre<<endl;
        cout<<"\nDirección del empleado: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"\nCiudad del empleado: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"\nProvincia del empleado: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"\nSalario del empleado: "<<empleados[i].salario<<endl;
    }





    return 0;
}