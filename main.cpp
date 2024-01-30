#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
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
    Empresa miempresa;
    miMenu.agregar("Ver datos de la empresa", '1');
    miMenu.agregar("Ver lista de empleados", '2');
    miMenu.agregar("Ver lista de proyectos", '3');
    miMenu.agregar("Salir", '0');
    menuEmpleados.agregar("Despedir empleados", '1');
    menuEmpleados.agregar("Contratar empleados", '2');
    menuEmpleados.agregar("Modificar informacion de empleado", '3');
    menuEmpleados.agregar("Salir", '0');
    menuProyectos.agregar("Crear proyectos", '1');
    menuProyectos.agregar("Eliminar proyectos", '2');
    menuProyectos.agregar("Modificar proyectos", '3');
    menuProyectos.agregar("Salir", '0');
    /*miMenu.agregar("Contratar empleado", '4');
    miMenu.agregar("Despedir empleado", '5');
    miMenu.agregar("Crear proyecto", '4');*/
    char opcionElegida;

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
                
                char opcE;
                do{
                    menuEmpleados.ver();
                    opcE = menuEmpleados.capturar();
                    switch (opcE)
                    {
                    case '1':
                        cout << "Has seleccionado la opcion despedir empleados." << endl;
                        break;
                    case '2':
                        cout << "Has seleccionado la opcion contratar empleados." << endl;
                        break;
                    case '3':
                        cout << "Has seleccionado la opcion modificar empleado. " << endl;
                        break;
                    }
                    system("pause");
                }while(opcE != '0');
                break;
            case '3':
                cout << "Has seleccionado la opcion ver lista de proyectos." << endl;
                
                char opcP;
                do{
                    menuProyectos.ver();
                    opcP = menuProyectos.capturar();
                    switch (opcP)
                    {
                    case '1':
                        cout << "Has seleccionado la opcion crear proyectos." << endl;
                        break;
                    case '2':
                        cout << "Has seleccionado la opcion eliminar proyectos." << endl;
                        break;
                    case '3':
                        cout << "Has seleccionado la opcion modificar proyecto." << endl;
                        break;
                    }
                    system("pause");
                }while(opcP != '0');
                break;
            
        }

        // Pausa para que el usuario vea el resultado
        system("pause");

    } while(opcionElegida != '0');  // Terminar el bucle cuando se presione '0'
    
    cout<<"El programa finalizo";
    return 0;
}