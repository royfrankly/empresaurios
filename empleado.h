#ifndef EMPLEADO_H
#define EEMPLADO_H
#include <iostream>
#include <string>
using namespace std;
//clase empleado
class Empleado{
    private:
        int id;
        string nombre;
        string tipo;
        float salario;
        //Contacto contacto;
    public:
        Empleado();
        Empleado(int, string, string, float);
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



   

