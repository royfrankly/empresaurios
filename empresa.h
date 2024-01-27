#ifndef EMPRESA_H
#define EMPRESA_H
#include "contacto.h"
#include "empleado.h"
#include "proyecto.h"
#include <iostream>
using namespace std;

class Empresa{
    private:
        string nombre;
        string ruc;
        string descripcion;
        Contacto contactoempresa;
        Empleado listaempleados[100];
        Proyecto listaproyectos[100];
        int numEmpleados;
        int numProyectos;
    public:
        Empresa();
        Empresa(string, string, string, contacto, empleado, proyecto);
        void mostrarEmpresa();
        void contratarEmpleado();
        void despedirEmpleado();
        void crearProyecto();
        void agregarProyecto();
};

#endif