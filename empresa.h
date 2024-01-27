#ifndef EMPRESA_H
#define EMPRESA_H
#include "contacto.h"
#include "empleado.h"
#include "proyecto.h"
#include <iostream>
using namespace std;

class Empresa:public Contacto{
    private:
        string nombre;
        string ruc;
        string descripcion;
        int numEmpleados;
        int numProyectos;
        Empleado listaempleados[100];
        Proyecto listaproyectos[100];
    public:
        Empresa();
        Empresa(string, string, string,int,int,string,string,string,string);
        void mostrarEmpresa();
        void contratarEmpleado();
        void despedirEmpleado();
        void crearProyecto();
        void agregarProyecto();
};

#endif