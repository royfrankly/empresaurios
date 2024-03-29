#include "contacto.h"

//-------------------constructores----------------------------
Contacto::Contacto(){
    direccion = "";
    correo = "";
    telefono = "";
    sitioWeb= "";
}
Contacto::Contacto(string _direccion, string _correo, string _telefono, string  _sitioweb){
    direccion = _direccion;
    correo = _correo;
    telefono = _telefono;
    sitioWeb = _sitioweb;
}

//-----------------------geters y seters---------------------------------
string Contacto::getDireccion(){
    return direccion;
}
void Contacto::setDireccion(string dir){
    direccion = dir;
}
string Contacto::getCorreo(){
    return correo;
}
void Contacto::setCorreo(string email){
    correo = email;
}
string Contacto::getTelefono(){
    return telefono;
}
void Contacto::setTelefono(string tel){
    telefono = tel;
}
string Contacto::getSitioWeb(){
    return sitioWeb;
}
void Contacto::setSitioWeb(string web){
    sitioWeb = web;
}
//-----------otros y sobrecargas----------------------------------------------------
void Contacto::mostrarContacto(){
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Correo: "<<correo<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Sitio web: "<<sitioWeb<<endl;
}
ostream& operator<<(ostream& os, const Contacto& contacto) {
    os <<"("<< contacto.direccion << ") ";
    os <<"("<< contacto.correo <<") ";
    os <<"("<< contacto.telefono <<") ";
    os<<"("<< contacto.sitioWeb <<") ";
    return os;
}
istream& operator>>(istream& is, Contacto& contacto) {
    cout<<"Direccion: ";getline(is, contacto.direccion);
    cout<<"Correo: ";getline(is, contacto.correo); 
    cout<<"Telefono: ";getline(is, contacto.telefono);
    cout<<"Sitio Web: ";getline(is, contacto.sitioWeb);
    return is;
}