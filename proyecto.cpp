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
void Proyecto::removerUnaTarea(int posicion){
    listaTareas.erase(listaTareas.begin()+posicion-1);
}
//void Proyecto::crearTarea(){

//}                                                       
