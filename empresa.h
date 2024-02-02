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
        vector<Empleado> listaEmpleados;
        vector<Proyecto> listaProyectos;
    public:
    //-------------------constructores---------------------------
        Empresa();
        Empresa(string, string, string,string,string,string,string);
    //-------------------geters y seters---------------------------
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
    //-------------------otros y sobrecargas---------------------------        
        void agregarUnProyecto(Proyecto);
        void removerUnProyecto(int);
        friend ostream& operator<<(ostream& os, const Empresa& );
        friend istream& operator>>(istream& is, Empleado& );
        void mostrarEmpresa();
        void guardarEmpleado(Empleado);
        //cuando se inicie el programa cargara los empelados
        void cargarEmpleados();
        void leerEmpleados();
        void leerEmpresa();
        void obtenerEmpleados();
        void obtenerProyecto();

};
#endif