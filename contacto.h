#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>
using namespace std;
class Contacto{
    protected:
        string direccion;
        string correo;
        string telefono;
        string sitioWeb;
    public:
        Contacto();
        Contacto(string, string, string, string);
        string getDireccion();
        void setDireccion(string);
        string getCorreo();
        void setCorreo(string);
        string getTelefono();
        void setTelefono(string);
        string getSitioWeb();
        void setSitioWeb(string);
        void mostrarContacto();
        void crearContacto();
        bool operator <(Tarea&);
        bool operator >(Tarea&);
        friend ostream& operator<<(ostream&, const Contacto& );
        friend istream& operator>>(istream&, Contacto& );

};
#endif