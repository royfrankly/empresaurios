#include "empresa.h"

//constructores----------------------------------------
Empresa::Empresa(){
    nombre = "";
    ruc = "";
    descripcion = "";
    numEmpleados = 0;
    numProyectos= 0;
}
Empresa::Empresa(string _nombre, string _ruc, string _descripcion, int _numEmpleados, int _numProyectos){
    nombre = _nombre;
    ruc = _ruc;
    descripcion = _descripcion;
    numEmpleados = _numEmpleados;
    numProyectos = _numProyectos;
}
//metodos----------------------------------------------
void Empresa::mostrarEmpresa(){
    cout<<"Datos del empleado:"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Ruc: "<<ruc<<endl;
    cout<<"Descripcion: "<<descripcion<<endl;
    cout<<"Contacto: "<<contactoempresa<<endl;
}
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
        coout<<"Empleado "<<listaEmpleados[numEmpleados-1].mostrarEmpleado()<<" despedido."<<endl;
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
void Empresa::crearProyecto(){
    if (numProyectos<100){
        listaproyectos[numProyectos++] = proyecto;
        cout<<"Nuevo proyecto agregado."<<endl;
    }
    else{
        cout<<"Suficientes proyectos"<<endl;
    }
}