#include "empresa.h"

//constructores----------------------------------------
Empresa::Empresa(){
    nombre = "";
    ruc = "";
    descripcion = "";
}
Empresa::Empresa(string _nombre, string _ruc, string _descripcion){
    nombre = _nombre;
    ruc = _ruc;
    descripcion = _descripcion;
}