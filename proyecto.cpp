#include "proyecto.h"
#include "tarea.h"
Proyecto::Proyecto(){
    fechaCreacion = "";
    fechaFin = "";
}
Proyecto::Proyecto(string _nombre, string _fechaCreacion, string _fechaFin, Equipo lEquipo, Tarea lTarea, string _descripcion, string _estado):Tarea( _descripcion, _estado){
    nombre = _nombre;
    fechaCreacion = _fechaCreacion;
    fechaFin = _fechaFin;

}
Proyecto::~Proyecto(){

}
string Proyecto::getNombre(){
    return nombre;
}
void Proyecto::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
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
void Proyecto::agregarUnaTarea(Tarea nuevaTarea){
    listaTareas.push_back(nuevaTarea);
}
void Proyecto::removerUnaTarea(int indice){
    if (indice >= 0 && indice < listaTareas.size()) {
        listaTareas.erase(listaTareas.begin() + indice);
    }
}
bool Proyecto::operator<(const Proyecto& otroProyecto) const {
    return nombre < otroProyecto.nombre;
}
bool Proyecto::operator>(const Proyecto& otroProyecto) const {
    return nombre > otroProyecto.nombre;
}
istream& operator>>(istream& is, Proyecto& proyecto) {
    // Ingresar datos para la clase base Tarea
    is >> dynamic_cast<Tarea&>(proyecto);
    // Ingresar datos adicionales específicos de Proyecto
    cout << "Ingrese el nombre del proyecto: ";
    getline(is, proyecto.nombre);
    cout << "Ingrese la fecha de creación del proyecto: ";
    getline(is, proyecto.fechaCreacion);
    cout << "Ingrese la fecha de finalización del proyecto: ";
    getline(is, proyecto.fechaFin);
    return is;
}
ostream& operator<<(ostream& os, const Proyecto& proyecto) {
    // Mostrar datos de la clase base Tarea
    os << dynamic_cast<const Tarea&>(proyecto);
    // Mostrar datos adicionales específicos de Proyecto
    os << "Nombre del proyecto: " << proyecto.nombre << "\n";
    os << "Fecha de creación del proyecto: " << proyecto.fechaCreacion << "\n";
    os << "Fecha de finalización del proyecto: " << proyecto.fechaFin << "\n";
    return os;
}
//void Proyecto::crearTarea(){

//}                                                       
