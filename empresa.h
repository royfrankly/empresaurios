#ifndef EMPRESA_H
#define EMPRESA_H
#include "contacto.h"
#include "empleado.h"
#include "proyecto.h"
#include <iostream>
#include <vector>
using namespace std;

class Empresa:public Contacto{
    private:
        string nombre;
        string ruc;
        string descripcion;
        int numEmpleados;
        int numProyectos;
        vector<Empleado> listaempleados;
        vector<Proyecto> listaproyectos;
    public:
        Empresa();
        Empresa(string, string, string,string,string,string,string);
        string getNombre();
        void setNombre(string );
        string getRuc();
        void setRuc(string );
        string getDescripcion();
        void setDescripcion(string );
        const vector<Empleado>& getListaEmpleados();
        void setListaEmpleados(const vector<Empleado>& nuevaLista);
        void agregarUnEmpleado(Empleado);
        void removerUnEmpleado(int);
        const vector<Proyecto>& getListaProyectos();
        void setListaProyectos(const vector<Proyecto>& nuevaLista);
        void agregarUnProyecto(Proyecto);
        void removerUnProyecto(int);
        void mostrarEmpresa();
        void contratarEmpleado();
        void despedirEmpleado();
        void crearProyecto();
        void agregarProyecto();
};

#endif