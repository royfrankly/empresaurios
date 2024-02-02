#include "proyecto.h"
#include "tarea.h"
//--------------------constructores y destructores-------------------
Proyecto::Proyecto(){
    nombre = "";
    estado = "";
    descripcion = "";
    fechaCreacion = "";
    fechaFin = "";
}
Proyecto::Proyecto(string _nombre, string _estado, string _descripcion, string _fechaCreacion, string _fechaFin, Equipo _miEquipo,const vector<Tarea>& _listaTareas){
    nombre = _nombre;
    estado = _estado;
    descripcion = _descripcion;
    fechaCreacion = _fechaCreacion;
    fechaFin = _fechaFin;
    miEquipo = _miEquipo;
    listaTareas = _listaTareas;
}
Proyecto::~Proyecto(){

}
//---------------------geters y seters-------------------------------------------
string Proyecto::getNombre(){
    return nombre;
}
void Proyecto::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
}
string Proyecto::getEstado(){
    return estado;
}
void Proyecto::setEstado(string nuevoEstado){
    estado = nuevoEstado;
}
string Proyecto::getDescripcion(){
    return descripcion;
}
void Proyecto::setDescripcion(string nuevaDescripcion){
    descripcion = nuevaDescripcion;
}
string Proyecto::getFechaCreacion(){
    return fechaCreacion;
}
void Proyecto::setFechaCreacion(string nuevaFechaCreacion){
    fechaCreacion = nuevaFechaCreacion;
}
string Proyecto::getFechaFin(){
    return fechaFin;
}
void Proyecto::setFechaFin(string nuevaFechaFin ){
    fechaFin = nuevaFechaFin;
}
Equipo Proyecto::getEquipo(){
    return miEquipo;
}
void Proyecto::setEquipo(Equipo nuevoEquipo){
    miEquipo = nuevoEquipo;
}
const vector<Tarea>& Proyecto::getListaTareas(){
    return listaTareas;
}
void Proyecto::setListaTareas(const vector<Tarea>& nuevaLista){
    listaTareas = nuevaLista;
}
//--------------------sobrecargas y otros--------------------------------------------
void Proyecto::agregarUnaTarea(Tarea nuevaTarea){
    listaTareas.push_back(nuevaTarea);
}
void Proyecto::removerUnaTarea(int indice){
    if (indice >= 0 && indice < listaTareas.size()) {
        listaTareas.erase(listaTareas.begin() + indice);
    }
}
bool Proyecto::operator<(const Proyecto& otroProyecto) const {
    if(nombre < otroProyecto.nombre)
        return true;
    else
        return false;
}
bool Proyecto::operator>(const Proyecto& otroProyecto) const {
    if(nombre > otroProyecto.nombre)
        return true;
    else
        return false;
}
istream& operator>>(istream& is, Proyecto& proyecto) {
    cout << "Ingrese el nombre del proyecto: ";
    getline(is, proyecto.nombre);
    cout << "Ingrese el estado del proyecto: ";
    getline(is, proyecto.estado);
    cout << "Ingrese la descripción del proyecto: ";
    getline(is, proyecto.descripcion);
    cout << "Ingrese la fecha de creación del proyecto: ";
    getline(is, proyecto.fechaCreacion);
    cout << "Ingrese la fecha de finalización del proyecto: ";
    getline(is, proyecto.fechaFin);
    return is;
}
ostream& operator<<(ostream& os, const Proyecto& proyecto) {
    os << "Nombre: " << proyecto.nombre << "\n";
    os << "Estado: " << proyecto.estado << "\n";
    os << "Descripción: " << proyecto.descripcion << "\n";
    os << "Fecha de Creación: " << proyecto.fechaCreacion << "\n";
    os << "Fecha de Finalización: " << proyecto.fechaFin << "\n";
    return os;
}

//void Proyecto::crearTarea(){

//}                                                       
