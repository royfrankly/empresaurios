#ifndef TAREA_H
#define TAREA_H
#include <bits/stdc++.h>
using namespace std;

class Tarea{
    private:
        string descripcionTarea;
        string estadoTarea;
    public:
        Tarea();
        Tarea(string, string);
        void cambiarEstado();
};

#endif