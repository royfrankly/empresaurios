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
        virtual void mostrar()=0;
};
#endif