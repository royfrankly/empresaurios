#include "empresa.h"
#include <iostream>
#include <fstream>
#include <sstream>

//constructores----------------------------------------
Empresa::Empresa(){
    nombre = "";
    ruc = "";
    descripcion = "";

}
Empresa::Empresa(string _nombre, string _ruc, string _descripcion,string _direccion, string _correo, string _telefono, string  _sitioweb):Contacto(_direccion, _correo, _telefono, _sitioweb){
    nombre = _nombre;
    ruc = _ruc;
    descripcion = _descripcion;
}
//metodos----------------------------------------------
string Empresa::getNombre(){
    return nombre;
}
void Empresa::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
}
string Empresa::getRuc(){
    return ruc;
}
void Empresa::setRuc(string nuevoRuc){
    ruc = nuevoRuc;
}
string Empresa::getDescripcion(){
    return ruc;
}
void Empresa::setDescripcion(string nuevaDescripcion){
    descripcion = nuevaDescripcion;
}
const vector<Empleado>& Empresa::getListaEmpleados(){
    return listaEmpleados;
}
void Empresa::setListaEmpleados(const vector<Empleado>& nuevaLista){
    listaEmpleados = nuevaLista;
}
void Empresa::agregarUnEmpleado(Empleado nuevoEmpleado){
    listaEmpleados.push_back(nuevoEmpleado);
}
void Empresa::removerUnEmpleado(int indice){
    if (indice >= 0 && indice < listaEmpleados.size()) {
    // Utiliza erase para eliminar el empleado en la posición indicada
    listaEmpleados.erase(listaEmpleados.begin() + indice);
    cout << "Empleado eliminado correctamente." << endl;
    } else {
        cout << "Índice de empleado no válido." << endl;
    }
}
const vector<Proyecto>& Empresa::getListaProyectos(){
    return listaProyectos;
}
void Empresa::setListaProyectos(const vector<Proyecto>& nuevaLista){
    listaProyectos = nuevaLista;
}
void Empresa::agregarUnProyecto(Proyecto nuevoProyecto){
    listaProyectos.push_back(nuevoProyecto);
}
void Empresa::removerUnProyecto(int indice){
    if (indice >= 0 && indice < listaProyectos.size()) {
        listaProyectos.erase(listaProyectos.begin() + indice);
    }
}
void Empresa::guardarEmpleado(Empleado empleado) {
    agregarUnEmpleado(empleado);
    empleado.guardarEnArchivoListaEmpleados();
}
void Empresa::leerEmpleados(){
    ifstream leerEmpleados;
    char Xd;
    string nombreArchivo =  "empleados/listaEmpleados.txt";
    leerEmpleados.open(nombreArchivo);
    if(leerEmpleados.is_open()){
        while (!leerEmpleados.eof()){
            leerEmpleados.get(Xd);
            if(Xd == '('  || Xd == ')'){
                Xd=' '; 
            }
            cout<<Xd;
        }
        leerEmpleados.close();
    }else{
        cout<<"El archivo no se peude abrir"<<endl;
    }
}
/*
ostream& operator<<(ostream& os, const Empresa& empresa) {
    os<<"("<<empresa.nombre<<")";
    os<<"("<<empresa.ruc<<")";
    os<<"("<<empresa.descripcion<<")";
    
    const vector<Tarea>& tareas = empresa. ;
    os << " -";
    for (const Tarea& tarea : tareas) {
        os << " -" << tarea << "    ";
    }
    return os;
}

istream& operator>>(istream& is, Empresa& empresa) {
    is >> empresa.id;

    is >> empresa.salario;
    // Ingresar datos para la clase base Contacto
    is >> dynamic_cast<Contacto&>(empresa);
    // Ingresar datos adicionales específicos de empresa
    cout << "Ingrese el ID del empresa: ";
    
    cout << "Ingrese el nombre del empresa: ";
    is.ignore();  // Ignorar el salto de línea pendiente
    getline(is, empresa.nombre);
    cout << "Ingrese el tipo del empresa: ";
    getline(is, empresa.tipo);
    cout << "Ingrese el salario del empresa: ";
    
    return is;
}
*/
void Empresa::mostrarEmpresa(){
    cout<<"Datos del empresa:"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Ruc: "<<ruc<<endl;
    cout<<"Descripcion: "<<descripcion<<endl;
    mostrarContacto();
}
/*
void Empresa::contratarEmpleado(){
    if (numEmpleados<100){
        listaEmpleados[numEmpleados++] = empleado;
        cout<<"Nuevo empleado contratado."<<endl;
    }
    else{
        cout<<"No se pueden contratar más empleados"<<endl;
    }
}
void Empresa::despedirEmpleado(){
    if (numEmpleados<100){
        cout<<"Empleado "<<listaEmpleados[numEmpleados-1].mostrarEmpleado()<<" despedido."<<endl;
        numEmpleados--;
    }
    else{
        cout<<"No se pueden despedir más empleados"<<endl;
    }
}
void Empresa::crearProyecto(){
    if (numProyectos<100){
        listaproyectos[numProyectos++] = proyecto;
        cout<<"Nuevo proyecto creado."<<endl;
    }
    else{
        cout<<"Suficientes proyectos"<<endl;
    }
}
void Empresa::agregarProyecto(){
    if (numProyectos<100){
        listaproyectos[numProyectos++] = proyecto;
        cout<<"Nuevo proyecto agregado."<<endl;
    }
    else{
        cout<<"Suficientes proyectos"<<endl;
    }
}*/