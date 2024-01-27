#ifndef PROYECTO_H
#define PROYECTO_H
#include "tarea.h"
#include "equipo.h"
#include <iostream>
using namespace std;
class Proyecto:public Tarea{
    private:
        string nombre;
        Tarea tarea;
        string fechaCreacion;
        string fechaFin;
        Equipo listaEquipo[100];
        Tarea listaTarea[100];
    private:
        Proyecto 
}   



    +Proyecto()
    +Proyecto(prNombre: String, pr Descripcion: String, prEstado: String, prListaEquipo: Equipo[], prListaTareas: Tarea[], prFechaCreacion: String, prFechaFin: String)
    +crearTarea(): void
    +asignarEquipo(): void
    +cambiarEstado(nuevoEstado: String): void
}

#endif