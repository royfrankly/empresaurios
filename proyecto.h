#ifndef PROYECTO_H
#define PROYECTO_H
#include "tarea.h"
#include "equipo.h"
#include <iostream>
#include <vector>
using namespace std;
class Proyecto{
    private:
        string nombre;
        string estado;
        string descripcion;
        string fechaCreacion;
        string fechaFin;
        Equipo miEquipo;
        vector<Tarea> listaTareas;
    public:
    //--------------------constructores y destructores-------------------
        Proyecto();
        Proyecto(string , string , string , string , string , Equipo ,const vector<Tarea>& );
        ~Proyecto();
    //---------------------geters y seters-------------------------------------------
        string getNombre();
        void setNombre(string);
        string getEstado();
        void setEstado(string);
        string getDescripcion();
        void setDescripcion(string);
        string getFechaCreacion();
        void setFechaCreacion(string);
        string getFechaFin();
        void setFechaFin(string);
        Equipo getEquipo();
        int getIdEquipo();
        void setEquipo(Equipo);
        const vector<Tarea>& getListaTareas();
        void setListaTareas(const vector<Tarea>& nuevaLista);
        //-----------------------------Empleados-----------------------------------------
        Empleado leerEmpleado(int);
    //--------------------sobrecargas y otros--------------------------------------------
        void mostrarProyecto();
        void agregarUnaTarea(Tarea);
        void removerUnaTarea(int);
        bool operator<(const Proyecto&) const;
        bool operator>(const Proyecto&) const;
        friend istream& operator>>(istream&, Proyecto&);
        friend ostream& operator<<(ostream&, const Proyecto&);
        void guardarEnArchivoListaProyectos();
        //void crearTarea();
};
#endif