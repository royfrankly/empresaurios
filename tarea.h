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
        void mostrarTarea();
    //------------sobrecargas----------------------------------------------------
        bool operator <(Tarea&);
        bool operator >(Tarea&);
        friend ostream& operator<<(ostream& , const Tarea& );
        friend istream& operator>>(istream&, Tarea&);
        void guardarEnArchivoTareas(string );
        void leerElArchivo(string );
};

//se deben poner 3 formas de guardar archivos y mantenerlos actualizados constantemente
// lo mas recomendable seria que una solo funcion se encarge de que actualice constantemente
//tiene que eliminar los archivos txt y 
//por proyecto
//por empleados
//
//
#endif