#ifndef PROYECTO_H
#define PROYECTO_H
#include "tarea.h"
#include "equipo.h"
#include <iostream>
using namespace std;
class Proyecto:public Tarea{
    private:
        string nombre;
        string fechaCreacion;
        string fechaFin;
        Tarea tarea;
        Equipo listaEquipo[100];
        Tarea listaTarea[100];
    private:
        Proyecto();
        Proyecto(string ,string, string, Tarea, Equipo, Tarea);
        ~Proyecto();
        void crearTarea();
};
#endif