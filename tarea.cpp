#include "tarea.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
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
    cout<<left;
    os << setw(11)<<tarea.estado <<left<<" "<< tarea.descripcion;
    return os;
}
istream& operator>>(istream& is, Tarea& tarea) {
    getline(is, tarea.estado);
    getline(is, tarea.descripcion);
    return is;
}
//crea o guarda las tareas en el archivo
void Tarea::guardarEnArchivo(string codigo) {
    string carpeta = "tareas/tarea";
    string nombreArchivo = carpeta + codigo + ".txt";
    ofstream archivoSalida(nombreArchivo, ios::app);
    if (archivoSalida.is_open()) {
        archivoSalida << *this<<endl;
        archivoSalida.close();
        cout << "Tarea almacenada en el archivo: " << nombreArchivo << endl;
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}
//lee el archivo
/*void Tarea::leerElArchivo(string codigo) {
    string est, des;
    char aux1, aux2,aux3;
    string carpeta = "tareas/tarea";
    string nombreArchivo = carpeta + codigo + ".txt";
    ifstream archivoSalida(nombreArchivo);
    if (archivoSalida.is_open()) {
        cout<<"LISTA DE TAREAS DEL EMPELADO CON ID "<<codigo<<"\n\n";
        //prepara encabezado de tabla a mostrar
        cout<<left;
        cout<<setw(10)<<"Estado"<<setw(17)<<"Descripcion"<<setw(50);
        while(archivoSalida.eof()) {
            archivoSalida >> est;
            archivoSalida.get(aux1);
            archivoSalida.get(aux2);
            archivoSalida.get(aux3);
            getline(archivoSalida, des);
            cout << est<<": "<<des<<endl;
        }
        
        archivoSalida.close();
        
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}*/