#ifndef EMPRESA_H
#define EMPRESA_H
#include "contacto.h"
#include "empleado.h"
#include "proyecto.h"
#include <bits/stdc++.h>
using namespace std;

class Empresa{
    private:
        string nombre;
        string ruc;
        string descripcion;
        contacto contactoempresa;
        empleado listaempleados[100];
        proyecto listaproyectos[100];
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