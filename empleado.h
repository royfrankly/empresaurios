#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>

#include "contacto.h"
#include "tarea.h"
#include <vector>
using namespace std;
//clase empleado
class Empleado:public Contacto{
    private:
        int id;
        string nombre;
        string tipo;
        float salario;
        vector<Tarea> listaTareas;
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
        const vector<Tarea>& getTareas();
        void setTareas(const vector<Tarea>&);
        void agregarUnaTarea(Tarea);
        void removerUnaTarea(int);
        void mostrarEmpleado();
        bool operator <(Empleado&);
        bool operator >(Empleado&);
        friend ostream& operator<<(ostream&, const Empleado& );
};

#endif



   

