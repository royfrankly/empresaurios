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
int Empleado::getId() const{
    return id;
}
void Empleado::serId(int nuevoId){
    id=nuevoId;
}
string Empleado::getNombre() const{
    return nombre;
}
void Empleado::setNombre(string nuevoNombre){
    nombre=nuevoNombre;
}
string Empleado::getTipo() const{
    return tipo;
}
void Empleado::setTipo(string nTipo){
    tipo=nTipo;
}
float Empleado::getSalario() const{
    return salario;
}
void Empleado::setSalario(float nSalario){
    salario=nSalario;
}
const vector<Tarea>& Empleado::getTareas(){
    return listaTareas;
}
void Empleado::setTareas(const vector<Tarea>& nuevaListaTareas){
    listaTareas = nuevaListaTareas;
}
void Empleado::agregarUnaTarea(Tarea nuevoTarea){
    listaTareas.push_back(nuevoTarea);
}
void Empleado::removerUnaTarea(int indice){
    if (indice >= 0 && indice < listaTareas.size()) {
        listaTareas.erase(listaTareas.begin() + indice);
    }
}
void Empleado::mostrarEmpleado(){
    cout<<"Datos del empleado:"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"Salario: "<<salario<<endl;
    mostrarContacto();
}
//en los operator < y > se debe tener muy en cuenta
//el primer elemento de acuerdo a ese se compara
// en este caso es el id (identificador del objeto actual)
bool Empleado::operator<(Empleado& otroEmpleado) {
    if(id < otroEmpleado.id)
        return true;
    else
        return false;
}
bool Empleado::operator>(Empleado& otroEmpleado) {
    if(id > otroEmpleado.id)
        return true;
    else
        return false;
}
ostream& operator<<(ostream& os, const Empleado& empleado) {
    os << "ID: " << empleado.id << "\n";
    os << "Nombre: " << empleado.nombre << "\n";
    os << "Tipo: " << empleado.tipo << "\n";
    os << "Salario: " << empleado.salario << "\n";
    os << static_cast<const Contacto&>(empleado);
    const vector<Tarea>& tareas = empleado.listaTareas;
    os << "Tareas:\n";
    for (const Tarea& tarea : tareas) {
        os << "\t" << tarea << "\n";
    }
    return os;
}
istream& operator>>(istream& is, Empleado& empleado) {
    // Ingresar datos para la clase base Contacto
    is >> dynamic_cast<Contacto&>(empleado);
    // Ingresar datos adicionales específicos de Empleado
    cout << "Ingrese el ID del empleado: ";
    is >> empleado.id;
    cout << "Ingrese el nombre del empleado: ";
    is.ignore();  // Ignorar el salto de línea pendiente
    getline(is, empleado.nombre);
    cout << "Ingrese el tipo del empleado: ";
    getline(is, empleado.tipo);
    cout << "Ingrese el salario del empleado: ";
    is >> empleado.salario;
    return is;
}