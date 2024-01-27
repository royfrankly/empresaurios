#ifndef EMPLEADO_H
#define EEMPLADO_H
#include <iostream>
#include <string>
using namespace std;
//clase empleado
class Empleado{
    private:
        int id;
        string nombre;
        string tipo;
        float salario;
        //Contacto contacto;
    public:
        Empleado();
        Empleado(int, string, string, float);
        ~Empleado();
        int getId();
        void serId(int);
        string getNombre();
        void setNombre(string);
        string getTipo();
        void setTipo(string);
        float getSalario();
        void setSalario(float);
        void mostrarEmpleado();
};
//constructores--------------------------------
Empleado::Empleado(){
    id=0;
    nombre="";
    tipo="";
    salario=0;
}
Empleado::Empleado(int _id, string _nombre, string _tipo, float _salario){
    id=_id;
    nombre=_nombre;
    tipo=_tipo;
    salario=_salario;
}
//destructor--------------------------------
Empleado::~Empleado(){
    
}
int Empleado::getId(){
    return id;
}
void Empleado::serId(int nuevoId){
    id=nuevoId;
}
string Empleado::getNombre(){
    return nombre;
}
void Empleado::setNombre(string nuevoNombre){
    nombre=nuevoNombre;
}
string Empleado::getTipo(){
    return tipo;
}
void Empleado::setTipo(string nTipo){
    tipo=nTipo;
}
float Empleado::getSalario(){
    return salario;
}
void Empleado::setSalario(float nSalario){
    salario=nSalario;
}
void Empleado::mostrarEmpleado(){
    cout<<"Datos del empleado:"<<endl;
    cout<<"Nombre: "<<nombre<<endl;    
    cout<<"Id: "<<id<<endl;
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"Salario: "<<salario<<endl;
}

#endif



   

