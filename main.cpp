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
    menu miMenu;
    Empresa miempresa;
    miMenu.agregar("Ver datos de la empresa", '1');
    miMenu.agregar("Ver lista de empleados", '2');
    miMenu.agregar("Ver lista de proyectos", '3');
    /*miMenu.agregar("Contratar empleado", '4');
    miMenu.agregar("Despedir empleado", '5');
    miMenu.agregar("Crear proyecto", '4');*/
    char opcionElegida;

    do {
        miMenu.ver();
        opcionElegida = miMenu.capturar();

        switch(opcionElegida) {
            case '1':
                cout << "Has seleccionado la Opción 1." << endl;
                miempresa.mostrarEmpresa();
                break;
            case '2':
                cout << "Has seleccionado la Opción 2." << endl;
                
                break;
            case '3':
                cout << "Has seleccionado la Opción 3." << endl;
                break;
            case '4':
                cout << "Has seleccionado la Opción 4." << endl;
                break;
            case '5':
                // Realizar acciones para la Opción 5
                cout << "Has seleccionado la Opción 5." << endl;
                break;
            case '6':
                // Realizar acciones para la Opción 6
                cout << "Has seleccionado la Opción 6." << endl;
                break;
        }

        // Pausa para que el usuario vea el resultado
        system("pause");

    } while(opcionElegida != '0');  // Terminar el bucle cuando se presione '0'
    
    cout<<"El programa finalizo";
    return 0;
}