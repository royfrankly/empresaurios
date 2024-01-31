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
    //-------------------constructores---------------------------
        Empleado();
        Empleado(int, string, string, float, string, string,string,string);
        ~Empleado();
    //-------------------geters y seters---------------------------
        int getId() const;
        void serId(int);
        string getNombre() const;
        void setNombre(string);
        string getTipo() const;
        void setTipo(string);
        float getSalario() const;
        void setSalario(float);
        const vector<Tarea>& getTareas();
        void setTareas(const vector<Tarea>&);
    //-------------------otros y la sobrecarga---------------------------
        void agregarUnaTarea(Tarea);
        void removerUnaTarea(int);
        void mostrarEmpleado();
        bool operator <(Empleado&);
        bool operator >(Empleado&);
        friend ostream& operator<<(ostream&, const Empleado& );
        friend istream& operator>>(istream&, Empleado& );
};
#endif



   

