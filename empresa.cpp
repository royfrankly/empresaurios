#include "empresa.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;
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
//#############################EMPLEADOS################################################
const vector<Empleado>& Empresa::getListaEmpleados(){
    return listaEmpleados;
}
void Empresa::setListaEmpleados(const vector<Empleado>& nuevaLista){
    listaEmpleados = nuevaLista;
}
//############################PROYECTOS##################################################
Proyecto Empresa::getUnoDeLaListaProyecto(int indice){
    return listaProyectos[indice-1];
}
//######################otros################################
void Empresa::agregarUnEmpleado(Empleado nuevoEmpleado){
    listaEmpleados.push_back(nuevoEmpleado);
}
void Empresa::removerUnEmpleado(int indice){
    if (indice >= 0 && indice < listaEmpleados.size()) {
    // Utiliza erase para eliminar el empleado en la posición indicada
    listaEmpleados.erase(listaEmpleados.begin() + indice-1);
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
        listaProyectos.erase(listaProyectos.begin() + indice-1);
    }
}
void Empresa::guardarEmpleado(Empleado empleado) {
    agregarUnEmpleado(empleado);
    empleado.guardarEnArchivoListaEmpleados();
}
//empleados

void Empresa::leerEmpleados() {
    ifstream archivo;
    string linea;
    Empleado emp;
    archivo.open("empresa/listaEmpleados.txt");
    char aux;
    
    if (archivo.is_open()) {
        cout << "Se abre el archivo correctamente." << endl;

        // Variables para almacenar los datos
        string id, nombre, tipo, salario, direccion, correo, telefono, sitioweb;

        // Iterar sobre todas las líneas del archivo
        while (getline(archivo, linea)) {
            // Procesar la línea y extraer datos entre paréntesis
            size_t posInicio = 0;
            size_t posFin = 0;
            
            while ((posInicio = linea.find('(', posFin)) != string::npos) {
                posFin = linea.find(')', posInicio);
                if (posFin != string::npos) {
                    string contenido = linea.substr(posInicio + 1, posFin - posInicio - 1);

                    // Almacenar el contenido en las variables correspondientes
                    if (id.empty()) {
                        id = contenido;
                    } else if (nombre.empty()) {
                        nombre = contenido;
                    } else if (tipo.empty()) {
                        tipo = contenido;
                    } else if (salario.empty()) {
                        salario = contenido;
                    } else if (direccion.empty()) {
                        direccion = contenido;
                    } else if (correo.empty()) {
                        correo = contenido;
                    } else if (telefono.empty()) {
                        telefono = contenido;
                    } else if (sitioweb.empty()) {
                        sitioweb = contenido;
                    }
                }
            }
            emp.setId(stoi(id));
            emp.setNombre(nombre);
            emp.setTipo(tipo);
            emp.setSalario(stof(salario));
            emp.setDireccion(direccion);
            emp.setCorreo(correo);
            emp.setTelefono(telefono);
            emp.setSitioWeb(sitioweb);
            agregarUnEmpleado(emp);
            
            // Limpiar variables para el próximo empleado
            id.clear();
            nombre.clear();
            tipo.clear();
            salario.clear();
            direccion.clear();
            correo.clear();
            telefono.clear();
            sitioweb.clear();
        }

    } else {
        cout << "ERROR: No se pudo abrir el archivo." << endl;
    }

    archivo.close();
}

void Empresa::actualizarListaEmpleados(){
    ofstream archivo;
    archivo.open("empresa/listaEmpleados.txt", ios::trunc);
    archivo.close();
    for(int i=0; i<listaEmpleados.size(); i++){
        listaEmpleados[i].guardarEnArchivoListaEmpleados();
    }
    
}
void Empresa::mostrarEmpleados(){
    vector<Empleado> lempleados;
    cout<<"############LISTA DE EMPLEADOS###############"<<endl;
    cout<<setw(3)<<"POS";
    cout<<setw(2)<<""<<left<<setw(4)<<"ID";
    cout<<setw(14)<<""<<left<<setw(21)<<"NOMBRE";
    cout<<setw(8)<<""<<left<<setw(12)<<"TIPO";
    cout<<setw(1)<<""<<right<<setw(7)<<"SALARIO";
    cout<<setw(10)<<""<<left<<setw(20)<<"DIRECCION";
    cout<<setw(12)<<""<<left<<setw(18)<<"CORREO";        
    cout<<setw(2)<<""<<right<<setw(13)<<"TELEFONO";
    cout<<setw(10)<<""<<left<<setw(20)<<"SITIO WEB";
    cout<<endl;
    for(int i=0; i<listaEmpleados.size(); i++){
        cout<<left<<setw(3)<<i+1<<" ";
        cout<<setw(6)<<listaEmpleados[i].getId()<<" ";
        cout<<left<<setw(25)<<listaEmpleados[i].getNombre()<<" ";
        cout<<left<<setw(30)<<listaEmpleados[i].getTipo()<<" ";
        cout<<left<<setw(8)<<listaEmpleados[i].getSalario()<<" ";
        cout<<left<<setw(30)<<listaEmpleados[i].getDireccion()<<" ";
        cout<<left<<setw(30)<<listaEmpleados[i].getCorreo()<<" ";        
        cout<<left<<setw(10)<<listaEmpleados[i].getTelefono()<<" ";
        cout<<left<<setw(30)<<listaEmpleados[i].getSitioWeb()<<" ";
        cout<<endl;
    }
}  
    
void Empresa::leerEmpresa() {
    ifstream archivo;
    string linea;
    archivo.open("empresa/empresa.txt");

    if (archivo.is_open()) {
        cout << "Se abre el archivo correctamente." << endl;

        getline(archivo, linea);
        
        // Variables para almacenar los datos
        string nombre, ruc, descripcion, direccion, correo, telefono, sitioweb;

        // Procesar la línea y extraer datos entre paréntesis
        size_t posInicio = 0;
        size_t posFin = 0;
        while ((posInicio = linea.find('(', posFin)) != string::npos) {
            posFin = linea.find(')', posInicio);
            if (posFin != string::npos) {
                string contenido = linea.substr(posInicio + 1, posFin - posInicio - 1);

                // Almacenar el contenido en las variables correspondientes
                if (nombre.empty()) {
                    nombre = contenido;
                } else if (ruc.empty()) {
                    ruc = contenido;
                } else if (descripcion.empty()) {
                    descripcion = contenido;
                } else if (direccion.empty()) {
                    direccion = contenido;
                } else if (correo.empty()) {
                    correo = contenido;
                } else if (telefono.empty()) {
                    telefono = contenido;
                } else if (sitioweb.empty()) {
                    sitioweb = contenido;
                }
            }
        }
        setNombre(nombre);
        setRuc(ruc);
        setDescripcion(descripcion);
        setDireccion(direccion);
        setCorreo(correo);
        setTelefono(telefono);
        setSitioWeb(sitioweb);
    } else {
        cout << "ERROR: No se pudo abrir el archivo." << endl;
    }

    archivo.close();
}
void Empresa::mostrarEmpresa() {
    cout << "Información de la Empresa:" << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "RUC: " << getRuc() << endl;
    cout << "Descripción: " << getDescripcion() << endl;
    mostrarContacto();  // Muestra la información de contacto de la empresa

    // Mostrar la lista de empleados
    cout << "\nLista de Empleados:" << endl;
    for (const Empleado& empleado : listaEmpleados) {
        cout << "ID: " << empleado.getId() << " - Nombre: " << empleado.getNombre() << " - Tipo: " << empleado.getTipo() << endl;
    }

    // Mostrar la lista de proyectos
    //cout << "\nLista de Proyectos:" << endl;
    //for (const Proyecto& proyecto : listaProyectos) {
    //    cout << "Nombre: " << proyecto.getNombre() << " - Estado: " << proyecto.getEstado() << " - Descripción: " << proyecto.getDescripcion() << endl;
    //}
}
//proyectos
void Empresa::leerProyectos() {
    ifstream archivo;
    string linea;
    Proyecto proy;
    archivo.open("empresa/listaProyectos.txt");
    char aux;
    
    if (archivo.is_open()) {
        cout << "Se abre el archivo correctamente." << endl;

        // Variables para almacenar los datos
        string nombre, estado, descripcion, fechaCreacion, fechaFin;

        // Iterar sobre todas las líneas del archivo
        while (getline(archivo, linea)) {
            // Procesar la línea y extraer datos entre paréntesis
            size_t posInicio = 0;
            size_t posFin = 0;
            
            while ((posInicio = linea.find('(', posFin)) != string::npos) {
                posFin = linea.find(')', posInicio);
                if (posFin != string::npos) {
                    string contenido = linea.substr(posInicio + 1, posFin - posInicio - 1);

                    // Almacenar el contenido en las variables correspondientes
                    if (nombre.empty()) {
                        nombre = contenido;
                    } else if (estado.empty()) {
                        estado = contenido;
                    } else if (descripcion.empty()) {
                        descripcion = contenido;
                    } else if (fechaCreacion.empty()) {
                        fechaCreacion = contenido;
                    } else if (fechaFin.empty()) {
                        fechaFin = contenido;
                    }
                }
            }

            proy.setNombre(nombre);
            proy.setEstado(estado);
            proy.setDescripcion(descripcion);
            proy.setFechaCreacion(fechaCreacion);
            proy.setFechaFin(fechaFin);

            agregarUnProyecto(proy);
            
            // Limpiar variables para el próximo empleado
            nombre.clear();
            estado.clear();
            descripcion.clear();
            fechaCreacion.clear();
            fechaFin.clear();
        }

    } else {
        cout << "ERROR: No se pudo abrir el archivo." << endl;
    }

    archivo.close();
}

void Empresa::actualizarListaProyectos(){
    ofstream archivo;
    archivo.open("empresa/listaProyectos.txt", ios::trunc);
    archivo.close();
    for(int i=0; i<listaProyectos.size(); i++){
        listaProyectos[i].guardarEnArchivoListaProyectos();
        
    }
    
}
void Empresa::mostrarProyectos(){
    vector<Empleado> lempleados;
    cout<<"################################LISTA DE PROYECTOS#############################"<<endl;
    cout<<left<<setw(5)<<"ID";
    cout<<left<<setw(11)<<"ESTADO";
    cout<<left<<setw(13)<<"F.CREACION";
    cout<<left<<setw(9)<<"F. FIN";  
    cout<<left<<setw(41)<<"NOMBRE DEL PROYECTO";
    cout<<left<<"DESCRIPCION DEL PROYECTO";   
    cout<<endl;
    for(int i=0; i<listaProyectos.size(); i++){
        cout<<setw(4)<<i+1<<" ";
        cout<<left<<setw(10)<<listaProyectos[i].getEstado()<<" ";
        cout<<left<<setw(10)<<listaProyectos[i].getFechaCreacion()<<" ";
        cout<<left<<setw(10)<<listaProyectos[i].getFechaFin()<<" ";  
        cout<<left<<setw(40)<<listaProyectos[i].getNombre()<<" ";
        cout<<left<<listaProyectos[i].getDescripcion()<<" ";   
        cout<<endl;
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