#ifndef PROYECTO_H
#define PROYECTO_H
#include "tarea.h"
#include "equipo.h"
#include <iostream>
#include <vector>
using namespace std;
class Proyecto:public Tarea{
    private:
        string nombre;
        string fechaCreacion;
        string fechaFin;
        Equipo miEquipo;
        vector<Tarea> listaTareas;
    public:
        Proyecto();
        Proyecto(string ,string, string, Equipo, Tarea, string,string);
        ~Proyecto();
        string getNombre();
        void setNombre(string);
        string getFechaCreacion();
        void setFechaCreacion(string);
        string getFechaFin();
        void setFechaFin(string);
        Equipo getEquipo();
        void setEquipo(Equipo);
        const vector<Tarea>& getListaTareas();
        void setListaTareas(const vector<Tarea>& nuevaLista);
        void agregarUnaTarea(Tarea);
        void removerUnaTarea(int);
        bool operator<(const Proyecto&) const;
        bool operator>(const Proyecto&) const;
        friend istream& operator>>(istream&, Proyecto&);
        friend ostream& operator<<(ostream&, const Proyecto&);
        //void crearTarea();
};
#endif