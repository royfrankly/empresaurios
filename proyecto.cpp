#include "proyecto.h"
#include "tarea.h"
Proyecto::Proyecto(){
    fechaCreacion = "";
    fechaFin = "";
}
Proyecto::Proyecto(string _nombre, string _fechaCreacion, string _fechaFin, Equipo lEquipo, Tarea lTarea, string _descripcion, string _estado):Tarea( _descripcion, _estado){
    nombre = _nombre;
    fechaCreacion = _fechaCreacion;
    fechaFin = _fechaFin;

}
Proyecto::~Proyecto(){
 
}
void Proyecto::crearTarea(){
    
}

                                                               
