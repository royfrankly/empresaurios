#include "equipo.h"
//constructores--------------------------------
Equipo::Equipo(){
    id=0;
    nombre="";
    numMiembros=0;
}
Equipo::Equipo(int _id, string _nombre,int _numMiembros){
    id=_id;
    nombre=_nombre;
    numMiembros=_numMiembros;
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
void Equipo::removerMiembro(){
    listaMiembros.pop_back();
}
/*void Equipo::agregarLider(Empleado empleMiembro){
    lider = empleMiembro;
}*/