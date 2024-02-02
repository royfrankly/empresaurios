#include "empresa.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <string>
#include <cstring>
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
const vector<Empleado>& Empresa::getListaEmpleados(){
    return listaEmpleados;
}
void Empresa::setListaEmpleados(const vector<Empleado>& nuevaLista){
    listaEmpleados = nuevaLista;
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

/*
void Empresa::obtenerProyecto() {
    string aux[10];
    bool cen = true;
    int i = 0;
    string nombre, estado, descripcion, fechaCreacion;
    Equipo miequipo;
    
    ifstream obtenerProyecto;
    Proyecto proy;
    obtenerProyecto.open("proyectos/listaProyectos.txt");
    if (obtenerProyecto.is_open()) {
        cout << "se abre dir" << endl;
        while (!obtenerProyecto.eof()) {
            // Leer una línea del archivo
            string linea;
            getline(obtenerProyecto, linea);

            // Verificar si la línea no está vacía
            if (!linea.empty()) {
                // Utilizar stringstream para dividir la línea en tokens
                istringstream ss(linea);
                string token;
                int index = 0;

                // Leer cada token y almacenarlo en el array aux
                while (ss >> token) {
                    // Eliminar los paréntesis de cada token
                    if (token[0] == '(') {
                        token = token.substr(1, token.size() - 1);
                    }
                    for (char &c : token) {
                        if (c == '(' || c == ')') {
                            // Crear un nuevo string sin paréntesis
                            token = token.substr(0, token.size() - 1);
                        }
                    }
                    aux[index++] = token;
                }
            }
            Tarea tarea(aux[6]);
            vector<Tarea> listaTareas;
            listaTareas.push_back(tarea);
            
            proy.setNombre(aux[0]);
            proy.setEstado(aux[1]);
            proy.setDescripcion(aux[2]);
            proy.setFechaCreacion(aux[3]);
            proy.setFechaFin(aux[4]);
            proy.setEquipo(aux[5]);
            proy.setListaTareas(aux[6]);
            agregarUnProyecto(proy);
        }
    } else {
        cout << "ERROR EL ARCHIVO NO SE PUEDE ABRIR" << endl;
    }
    obtenerProyecto.close();
}
*/
void Empresa::obtenerEmpleados() {
    string aux[10];
    bool cen = true;
    int id, i = 0;
    string nombre, tipo, direccion, correo, telefono, sitioWeb;
    float salario;
    ifstream obtenerEmpleados;
    Empleado emp;
    obtenerEmpleados.open("empresa/listaEmpleados.txt");
    if (obtenerEmpleados.is_open()) {
        cout << "se abre dir" << endl;
        while (!obtenerEmpleados.eof()) {
            // Leer una línea del archivo
            string linea;
            getline(obtenerEmpleados, linea);

            // Verificar si la línea no está vacía
            if (!linea.empty()) {
                // Utilizar stringstream para dividir la línea en tokens
                istringstream ss(linea);
                string token;
                int index = 0;

                // Leer cada token y almacenarlo en el array aux
                while (ss >> token) {
                    // Eliminar los paréntesis de cada token
                    if (token[0] == '(') {
                        token = token.substr(1, token.size() - 1);
                    }
                    for (char &c : token) {
                        if (c == '(' || c == ')') {
                            // Crear un nuevo string sin paréntesis
                            token = token.substr(0, token.size() - 1);
                        }
                    }
                    aux[index++] = token;
                }
            }
            
            emp.setId(stoi(aux[0]));
            emp.setNombre(aux[1]);
            emp.setTipo(aux[2]);
            emp.setSalario(stof(aux[3]));
            emp.setDireccion(aux[4]);
            emp.setCorreo(aux[5]);
            emp.setTelefono(aux[6]);
            emp.setSitioWeb(aux[7]);
            agregarUnEmpleado(emp);
        }
    } else {
        cout << "ERROR EL ARCHIVO NO SE PUEDE ABRIR" << endl;
    }
    obtenerEmpleados.close();
}
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
    
}
void Empresa::mostrarEmpleados(){
    vector<Empleado> lempleados;
    cout<<"############LISTA DE EMPLEADOS###############"<<endl;
    for(int i=0; i<listaEmpleados.size(); i++){
        cout<<i+1<<" ";
        cout<<listaEmpleados[i].getId()<<" ";
        cout<<listaEmpleados[i].getNombre()<<" ";
        cout<<listaEmpleados[i].getTipo()<<" ";
        cout<<listaEmpleados[i].getSalario()<<" ";
        cout<<listaEmpleados[i].getDireccion()<<" ";
        cout<<listaEmpleados[i].getCorreo()<<" ";        
        cout<<listaEmpleados[i].getTelefono()<<" ";
        cout<<listaEmpleados[i].getSitioWeb()<<" ";
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