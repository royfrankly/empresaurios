#ifndef TAREA_H
#define TAREA_H
#include <iostream>
using namespace std;
class Tarea{
    private:
        string descripcion;
        string estado;
    public:
    //-----------constructores-----------------------------------------------------
        Tarea();
        Tarea(string, string);
    //-----------geters y seters----------------------------------------------------
        string getDescripcion();
        void setDescripcion(string);
        string getEstado();
        void setEstado(string);
    //------------mostrar---------------------------------------------------
        void mostrar();
    //------------sobrecargas----------------------------------------------------
        bool operator <(Tarea&);
        bool operator >(Tarea&);
        friend ostream& operator<<(ostream& , const Tarea& );
        friend istream& operator>>(istream&, Tarea&);
        void guardarEnArchivo(string );
        void leerElArchivo(string );
};
#endif