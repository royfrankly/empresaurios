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
        vector<Equipo> listaEquipo;
        vector<Tarea> listaTarea;
    public:
        Proyecto();
        Proyecto(string ,string, string, Equipo, Tarea, string,string);
        ~Proyecto();
        void crearTarea();
};
#endif