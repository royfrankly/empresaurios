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
    //-------------------constructores---------------------------
        Contacto();
        Contacto(string, string, string, string);
    //-----------geters y seters----------------------------------------------------
        string getDireccion();
        void setDireccion(string);
        string getCorreo();
        void setCorreo(string);
        string getTelefono();
        void setTelefono(string);
        string getSitioWeb();
        void setSitioWeb(string);
    //-----------otros y sobrecargas----------------------------------------------------
        void mostrarContacto();
        friend ostream& operator<<(ostream&, const Contacto& );
        friend istream& operator>>(istream&, Contacto& );
};
#endif