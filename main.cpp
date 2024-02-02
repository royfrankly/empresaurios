#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
using namespace std;

#include "empleado.h"
#include "equipo.h"
#include "tarea.h"
#include "proyecto.h"
#include "contacto.h"
#include "empresa.h"
#include "metodosOrdenacion.h"
#include "menu.h"
int main(){
    menu miMenu,menuEmpleados,menuProyectos;
    miMenu.agregar("Ver datos de la empresa", '1');
    miMenu.agregar("Ver lista de empleados", '2');
    miMenu.agregar("Ver lista de proyectos", '3');
    miMenu.agregar("Salir", '0');
    menuEmpleados.agregar("Despedir empleados", '1');
    menuEmpleados.agregar("Contratar empleados", '2');
    menuEmpleados.agregar("Salir", '0');
    menuProyectos.agregar("Crear proyectos", '1');
    menuProyectos.agregar("Eliminar proyectos", '2');
    menuProyectos.agregar("Salir", '0'); 
    int indice, cen=0,cen1=0;
    char opcionElegida;
    Empresa miempresa;
    Proyecto nuevoProyecto;
    Empleado nuevoEmpleado;
    vector<Empleado> lempleados;
    miempresa.leerEmpleados();
    miempresa.leerProyectos();
    miempresa.leerEmpresa();
    do {
        miMenu.ver();
        opcionElegida = miMenu.capturar();

        switch(opcionElegida) {
            case '1':
                cout << "Has seleccionado la opcion ver empresa." << endl;
                
                
                miempresa.mostrarEmpresa();
                
                break;
            case '2':
                cout << "Has seleccionado la opcion ver lista de empleados." << endl;
                    //limpia la lista txt y luego la llena con los datos del vector
                    miempresa.actualizarListaEmpleados();

                    //solo muestra a los empleados almacenados en el vector
                    miempresa.mostrarEmpleados();
                char opcE;
                do{
                    menuEmpleados.ver();
                    opcE = menuEmpleados.capturar();
                    switch (opcE)
                    {
                        case '1':
                            
                            cout << "Has seleccionado la opcion despedir empleados." << endl;
                            cout<<"Digite la posicion del empleado a despedir: "<<endl;
                            cin>>indice;
                            miempresa.removerUnEmpleado(indice);
                            miempresa.actualizarListaEmpleados();
                            miempresa.mostrarEmpleados();
                            
                            break;
                        case '2':
                            cout << "Has seleccionado la opcion contratar empleados." << endl;
                            cin>>nuevoEmpleado;
                            miempresa.agregarUnEmpleado(nuevoEmpleado);
                            nuevoEmpleado.guardarEnArchivoListaEmpleados();
                            //miempresa.actualizarListaEmpleados();
                            miempresa.mostrarEmpleados();
                            break;
                    }
                    system("pause");
                }while(opcE != '0');
                break;
            case '3':
                cout << "Has seleccionado la opcion ver lista de proyectos." << endl;
                
                    miempresa.actualizarListaProyectos();
                    miempresa.mostrarProyectos();
                char opcP;
                do{
                    menuProyectos.ver();
                    opcP = menuProyectos.capturar();
                    switch (opcP)
                    {
                        case '1':
                            cout << "Has seleccionado la opcion crear proyectos." << endl;
                            cin>>nuevoProyecto;
                            miempresa.agregarUnProyecto(nuevoProyecto);
                            nuevoProyecto.guardarEnArchivoListaProyectos();
                            //miempresa.actualizarListaEmpleados();
                            miempresa.mostrarProyectos();

                            
                            break;
                        case '2':
                            cout << "Has seleccionado la opcion eliminar proyectos." << endl;
                            
                            miempresa.removerUnProyecto(indice);
                            miempresa.actualizarListaProyectos();
                            miempresa.mostrarProyectos();
                            break;
                        
                    }
                    system("pause");
                }while(opcP != '0');
                break;
            
        }

        // Pausa para que el usuario vea el resultado
        

    } while(opcionElegida != '0');  // Terminar el bucle cuando se presione '0'
    
    cout<<"El programa finalizo";
    
    return 0;
}