#ifndef TAREA_H
#define TAREA_H
#include <string>
#include <iostream>
using namespace std;
class Tarea{
    private:
        string descripcion;
        string estado;
    public:
        Tarea();
        Tarea(string, string);
        string getDescripcion();
        void setDescripcion(string);
        string getEstado();
        void setEstado(string);
        void mostrar();
};
#endif