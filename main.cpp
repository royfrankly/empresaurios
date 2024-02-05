#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
#include <locale.h>
#include "empleado.h"
#include "equipo.h"
#include "tarea.h"
#include "proyecto.h"
#include "contacto.h"
#include "empresa.h"
#include "metodosOrdenacion.h"
//#include "metodosBusqueda.h"
#include "menu.h"
int main(){
    setlocale(LC_CTYPE,"UTF-8");
    menu miMenu,menuEmpleados,menuProyectos, menuDetallesProyectos;
    miMenu.agregar("Ver datos de la empresa", '1');
    miMenu.agregar("Ver lista de empleados", '2');
    miMenu.agregar("Ver lista de proyectos", '3');
    miMenu.agregar("Salir", '0');
    menuEmpleados.agregar("Despedir empleados", '1');
    menuEmpleados.agregar("Contratar empleados", '2');
    menuEmpleados.agregar("Salir", '0');
    menuProyectos.agregar("Crear proyectos", '1');
    menuProyectos.agregar("Eliminar proyectos", '2');
    menuProyectos.agregar("Ver detalles de un proyecto", '3');
    menuProyectos.agregar("Salir", '0');
    menuDetallesProyectos.agregar("Crear tarea", '1');
    menuDetallesProyectos.agregar("modificar tarea", '2');
    menuDetallesProyectos.agregar("Eliminar tarea", '3');
    menuDetallesProyectos.agregar("Agregar miembros al equipo", '4');
    menuDetallesProyectos.agregar("Eliminar miembros del quipo", '5');
    menuDetallesProyectos.agregar("Salir", '0');
    int indice, cen=0,cen1=0,id,n;
    char opcionElegida;
    Empresa miempresa;
    Proyecto nuevoProyecto, verProyecto;
    Empleado nuevoEmpleado;
    Equipo miequipo;
    vector<Empleado> lempleados;
    Tarea mitarea;
    int lIdEmpleados[100];
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
                            
                            cout << "Has seleccionado la opcion despedir empleado." << endl;
                            cout<<"Digite la posicion del empleado a despedir: "<<endl;
                            cin>>indice;
                            miempresa.removerUnEmpleado(indice);
                            miempresa.actualizarListaEmpleados();
                            miempresa.mostrarEmpleados();
                            
                            break;
                        case '2':
                            cout << "Has seleccionado la opcion contratar empleado." << endl;
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
                cout << "Has seleccionado la opcion ver lista de proyecto." << endl;
                
                    miempresa.actualizarListaProyectos();
                    miempresa.mostrarProyectos();
                char opcP;
                do{
                    menuProyectos.ver();
                    opcP = menuProyectos.capturar();
                    switch (opcP)
                    {
                        case '1':
                            cout << "Has seleccionado la opcion crear proyecto." << endl;
                            cin>>nuevoProyecto;
                            system("CLS");
                            miempresa.mostrarEmpleados();
                            miempresa.agregarUnProyecto(nuevoProyecto);
                            nuevoProyecto.guardarEnArchivoListaProyectos();
                            //miempresa.actualizarListaEmpleados();
                            miempresa.mostrarProyectos();

                            
                            break;
                        case '2':
                            cout << "Has seleccionado la opcion eliminar proyecto." << endl;
                            cout<<"Digite pocision del proyecto a eliminar: "<<endl;
                            cin>>indice;
                            miempresa.removerUnProyecto(indice);
                            miempresa.actualizarListaProyectos();
                            miempresa.mostrarProyectos();
                            break;
                        case '3':
                            cout << "Has seleccionado la opcion ver detalladamente un proyecto."<< endl;
                            cout << "Digite la posicion del proyecto a ver: "<<endl;
                            cin>>indice;
                            verProyecto= miempresa.getUnoDeLaListaProyecto(indice);
                            verProyecto.mostrarProyecto();
                            
                            char opcP3;
                            
                            do{
                                menuDetallesProyectos.ver();
                                opcP3 = menuDetallesProyectos.capturar();
                                switch(opcP3)
                                {
                                    case '1':
                                        cout << "Has seleccionado la opcion crear tarea"<< endl;
                                        cin>>mitarea;
                                        verProyecto.agregarUnaTarea(mitarea);

                                        break;
                                    case '2':
                                        cout << "Has seleccionado la opcion modificar tarea"<< endl;


                                        break;
                                    case '3':
                                        cout << "Has seleccionado la opcion eliminar tarea"<< endl;


                                        break;
                                    case '4':
                                        cout << "Has seleccionado la opcion agregar miembros al equipo"<< endl;


                                        break;
                                    case '5':
                                        cout << "Has seleccionado la opcion eliminar miembros del equipo"<< endl;


                                        break;
                                        
                                }
                            }while(opcP3!='0');
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