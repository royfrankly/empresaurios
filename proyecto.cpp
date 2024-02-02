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
void Proyecto::guardarEnArchivoListaProyectos() {
    string carpeta = "empresa/listaProyectos";
    string nombreArchivo = carpeta+ ".txt";
    ofstream archivoSalida(nombreArchivo, ios::app);
    if (archivoSalida.is_open()) {
        archivoSalida << *this<<endl;
        archivoSalida.close();
        cout << "Tarea almacena da en el archivo: " << nombreArchivo << endl;
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}
/*istream& operator>>(istream& is, Proyecto& proyecto) {
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
}*/

//void Proyecto::crearTarea(){

//}                                                       
