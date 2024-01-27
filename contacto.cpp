#include "contacto.h"

//constructores----------------------------------------
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

//metodos----------------------------------------------
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
    return telefono
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
void Contacto::mostrar(){
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Correo: "<<correo<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Sitio web: "<<sitioWeb<<endl;
}