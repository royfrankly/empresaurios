#include "equipo.h"
//constructores--------------------------------
Equipo::Equipo(){
    id=0;
    nombre="";
    numMiembros=listaMiembros.size();
}
Equipo::Equipo(int _id, string _nombre){
    id=_id;
    nombre=_nombre;
    numMiembros=listaMiembros.size();
}
//metodos--------------------------------
int Equipo::getId(){
    return id;
}
void Equipo::setId(int nuevoId){
    id=nuevoId;
}
string Equipo::getNombre(){
    return nombre;
}
void Equipo::setNombre(string nuevoNombre){
    nombre=nuevoNombre;
}
int Equipo::getNumMiembros(){
    return numMiembros;
}
Empleado Equipo::getLider(){
    return lider;
}
void Equipo::setLider(Empleado nuevoLider){
    lider=nuevoLider;
}
void Equipo::setNumMiembros(int nuevoNumMiembros){
    numMiembros = nuevoNumMiembros;
}
void Equipo::agregarMiembro(Empleado empleMiembro){
   listaMiembros.push_back(empleMiembro);
}
void Equipo::removerMiembro(int posicion){
    listaMiembros.erase(listaMiembros.begin()+posicion-1);
}
void Equipo::agregarLider(Empleado empleMiembro){
    lider = empleMiembro;
}