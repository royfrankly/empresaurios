#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <vector>
#include "empleado.h"
using namespace std;
//clase equipo
class Equipo{
    private:
        int id;
        string nombre;
        int numMiembros;
        vector<Empleado> listaMiembros;
        Empleado lider;
    public:
        Equipo();
        Equipo(int, string);
        int getId();
        void setId(int);
        string getNombre();
        void setNombre(string);
        int getNumMiembros();
        void setNumMiembros(int);
        Empleado getLider();
        void setLider(Empleado);
        const vector<Empleado>& getListaMiembros();
        void setListaMiembros(const vector<Empleado>& nuevaLista);
        void agregarMiembro(Empleado);
        void removerMiembro(int);
        
};
#endif