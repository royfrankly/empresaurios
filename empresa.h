#ifndef EMPRESA_H
#define EMPRESA_H
#include "contacto.h"
#include "empleado.h"
#include "proyecto.h"
#include <iostream>
#include <vector>
using namespace std;
struct emplipos{
    int ideq;
    int idem;
    char totem;
    emplipos(){
        idem = 0;
        ideq = 0;
        totem = ' ';
    }
    emplipos(int _ideq, int _idem, char _totem){
        idem = _idem;
        ideq = _ideq;
        totem = _totem;
    }
    void setIdEmpleado(int nuevoIdEmpleado){
        idem = nuevoIdEmpleado;
    }
};

class Empresa:public Contacto{
    private:
        string nombre;
        string ruc;
        string descripcion;
        vector<Empleado> listaEmpleados;
        vector<Proyecto> listaProyectos;
        vector<emplipos> vistaParalela;
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
    //-------------------Vision paralela---------------------------        
        vector<emplipos>& getVistaParalela();
        void setVistaParalela(vector<emplipos>& nuevaVistaParalela);
        void crearVistasParalelas();
        void mostrarVistasParalelas();
        void actualizarVistaParalela();
        void guardarVistaParalela();
        void agregarEquipoVistaParalela(int,int);
        void agregarTotemVistaParalela(int,char);
        friend ostream& operator<<(ostream& , const emplipos& );
        void guardarEnArchivoVistaParalela();
    //-------------------otros y sobrecargas---------------------------        
        void agregarUnProyecto(Proyecto);
        void removerUnProyecto(int);
        friend ostream& operator<<(ostream& os, const Empresa& );
        friend istream& operator>>(istream& is, Empleado& );
        Empleado leerEmpleado(int );
        void mostrarEmpleados();
        void mostrarEmpleadosParaEquipo();
        void mostrarEmpresa();
        void guardarEmpleado(Empleado);
        //cuando se inicie el programa cargara los empelados
        void cargarEmpleados();
        void leerEmpleados();
        int sacarIdDeLaLista();
        void leerEmpresa();
        void obtenerEmpleados();
        void obtenerProyecto();
        void actualizarListaEmpleados();
        void leerProyectos();
        void actualizarListaProyectos();
        void mostrarProyectos();
        

        Proyecto getUnoDeLaListaProyecto(int);
};
#endif