#ifndef EMPLEADO_H
#define EEMPLADO_H
#include <iostream>
#include "contacto.h"
using namespace std;
//clase empleado
class Empleado:public Contacto{
    private:
        int id;
        string nombre;
        string tipo;
        float salario;
    public:
        Empleado();
        Empleado(int, string, string, float, string, string,string,string);
        ~Empleado();
        int getId();
        void serId(int);
        string getNombre();
        void setNombre(string);
        string getTipo();
        void setTipo(string);
        float getSalario();
        void setSalario(float);
        void mostrarEmpleado();
};
#endif



   

