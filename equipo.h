#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string>
#include "empleado.h"
using namespace std;
//clase equipo
class Equipo{
    private:
        int id;
        string nombre;
        Empleado listaMiembros[20];
        Empleado lider;
    public:
        Equipo();
        Equipo(int, string);
        void agregarMiembro(Empleado);
        void removerMiembro(Empleado);
        void agregarLider(Empleado);
};
#endif