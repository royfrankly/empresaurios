#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include "empleado.h"
using namespace std;
//clase equipo
class Equipo{
    private:
        int id;
        string nombre;
        int numMiembros;
        Empleado listaMiembros[20];
        Empleado lider;
    public:
        Equipo();
        Equipo(int, string,int);
        int getId();
        void setId(int);
        string getNombre();
        void setNombre(string);
        int getNumMiembros();
        void setNumMiembros(int);
        Empleado getLider();
        void setLider(Empleado);
        void agregarMiembro(Empleado);
        void removerMiembro(Empleado);
        void agregarLider(Empleado);
};
#endif