#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string>
using namespace std;
//clase equipo
class Equipo{
    private:
        int id;
        string nombre;
        Empleado listaMiembros[20];
        Empleado lider;
    public:
        Equipo();
        Equipo(int, string);
        void agregarMiembro(Empleado);
        void removerMiembro(Empleado);
        void agregarLider(Empleado);
};
//constructores--------------------------------
Equipo::Equipo(){
    id=0;
    nombre="";
}
Equipo::Equipo(int _id, string _nombre){
    id=_id;
    nombre=_nombre;
    
}
//metodos--------------------------------
void Equipo::agregarMiembro(Empleado){

}
void Equipo::removerMiembro(Empleado){

}
void Equipo::agregarLider(Empleado){
    
}






#endif