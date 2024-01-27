#include "tarea.h"
Tarea::Tarea(){
    descripcion = "";
    estado = "";
}
Tarea::Tarea(string _descripcion, string _estado){
    descripcion = _descripcion;
    estado = _estado;
}