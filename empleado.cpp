#include "empleado.h"
//constructores--------------------------------
Empleado::Empleado(){
    id=0;
    nombre="";
    tipo="";
    salario=0;
}
Empleado::Empleado(int _id, string _nombre, string _tipo, float _salario, string _direccion, string _correo, string _telefono, string _sitioWeb):Contacto(_direccion, _correo, _telefono, _sitioWeb){
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
    //Contacto.mostrar();
}
