#include "tarea.h"
Tarea::Tarea(){
    descripcion = "";
    estado = "";
}
Tarea::Tarea(string _descripcion, string _estado){
    descripcion = _descripcion;
    estado = _estado;
}
string Tarea::getDescripcion(){
    return descripcion;
}
void Tarea::setDescripcion(string nuevaDescripcion){
    descripcion=nuevaDescripcion;
}
string Tarea::getEstado(){
    return estado;
}
void Tarea::setEstado(string nuevoEstado){
    estado=nuevoEstado;
}
void Tarea::mostrar(){
    cout<<"descripcion:"<<endl<<descripcion<<endl;
    cout<<"estado:"<<endl<<estado<<endl;
}
bool Tarea::operator<(Tarea& otraTarea) {
    if(estado < otraTarea.estado)
        return true;
    else
        return false;
}
bool Tarea::operator>(Tarea& otraTarea) {
    if(estado > otraTarea.estado)
        return true;
    else
        return false;
}
ostream& operator<<(ostream& os, const Tarea& tarea) {
    os << tarea.estado << " - " << tarea.descripcion;
    return os;
}
istream& operator>>(istream& is, Tarea& tarea) {
    cout << "Ingrese la descripción de la tarea: ";
    getline(is, tarea.descripcion);
    cout << "Ingrese el estado de la tarea: ";
    getline(is, tarea.estado);
    return is;
}