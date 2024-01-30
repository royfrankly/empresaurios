#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "empleado.h"
#include "equipo.h"
#include "tarea.h"
#include "proyecto.h"
#include "contacto.h"
#include "empresa.h"
#include "metodosOrdenacion.h"
int main(){
    cout<<"ejecutando las tareas"<<endl;
    
    Equipo equipo1;
    Tarea tarea1;
    Proyecto proyecto1;
    Contacto contacto1;
    Empresa empresa1;
    vector<Empleado> vectorEmp;
    vector<Empleado> otroVector;
    cout<<"llego a la parte 1"<<endl;
    Empleado empleado1(1000,"royfrankl anthony","Programador",2000,"av. perdido","ry_rn@gmail.com","987654321","repo-royfrankly");
    
    
    Empleado empleado2 = {1001, "Ana María", "Diseñador", 2200.00, "Calle Creativa", "ana.maria@example.com", "876543210", "portfolio-ana"};
    Empleado empleado3 = {1002, "Carlos Pérez", "Analista", 2300.00, "Avenida Lógica", "carlos.perez@example.com", "765432109", "carlos-analiza"};
    Empleado empleado4 = {1003, "Laura García", "Tester", 2100.00, "Calle Pruebas", "laura.garcia@example.com", "654321098", "testing-laura"};
    Empleado empleado5 = {1004, "Juan Rodríguez", "Desarrollador", 2400.00, "Avenida Código", "juan.rodriguez@example.com", "543210987", "code-juan"};
    Empleado empleado6 = {1005, "María López", "Gerente", 2600.00, "Plaza Estrategia", "maria.lopez@example.com", "432109876", "manager-maria"};
    Empleado empleado7 = {1006, "Francisco Ruiz", "Programador", 2000.00, "Calle del Código", "francisco.ruiz@example.com", "987654321", "code-francisco"};
    Empleado empleado8 = {1007, "Elena González", "Diseñador", 2200.00, "Avenida Creativa", "elena.gonzalez@example.com", "876543210", "design-elena"};
    Empleado empleado9 = {1008, "Alejandro Martínez", "Analista", 2300.00, "Calle Lógica", "alejandro.martinez@example.com", "765432109", "analyst-alejandro"};
    Empleado empleado10 = {1009, "Isabel Torres", "Tester", 2100.00, "Avenida Pruebas", "isabel.torres@example.com", "654321098", "testing-isabel"};
    Empleado empleado11 = {1010, "Luisa Ramírez", "Desarrollador", 2400.00, "Plaza del Código", "luisa.ramirez@example.com", "543210987", "code-luisa"};
    Empleado empleado12 = {1011, "Javier Sánchez", "Gerente", 2600.00, "Avenida Estrategia", "javier.sanchez@example.com", "432109876", "strategy-javier"};
    Empleado empleado13 = {1012, "Marta Fernández", "Programador", 2000.00, "Calle del Software", "marta.fernandez@example.com", "987654321", "software-marta"};
    Empleado empleado14 = {1013, "Pedro González", "Diseñador", 2200.00, "Avenida Creativa", "pedro.gonzalez@example.com", "876543210", "design-pedro"};
    Empleado empleado15 = {1014, "Laura Jiménez", "Analista", 2300.00, "Calle Lógica", "laura.jimenez@example.com", "765432109", "analyst-laura"};
    Empleado empleado16 = {1015, "Carlos Vargas", "Tester", 2100.00, "Avenida Pruebas", "carlos.vargas@example.com", "654321098", "testing-carlos"};
    Empleado empleado17 = {1016, "Ana Martínez", "Desarrollador", 2400.00, "Plaza del Código", "ana.martinez@example.com", "543210987", "code-ana"};
    Empleado empleado18 = {1017, "Luis García", "Gerente", 2600.00, "Avenida Estrategia", "luis.garcia@example.com", "432109876", "strategy-luis"};
    Empleado empleado19 = {1018, "Elena Rodríguez", "Programador", 2000.00, "Calle del Software", "elena.rodriguez@example.com", "987654321", "software-elena"};
    Empleado empleado20 = {1019, "Juan Torres", "Diseñador", 2200.00, "Avenida Creativa", "juan.torres@example.com", "876543210", "design-juan"};
    /*
    Empleado empleado21 = {1020, "Marta Pérez", "Analista", 2300.00, "Calle Lógica", "marta.perez@example.com", "765432109", "analyst-marta"};
    Empleado empleado22 = {1021, "Carlos Sánchez", "Tester", 2100.00, "Avenida Pruebas", "carlos.sanchez@example.com", "654321098", "testing-carlos"};
    Empleado empleado23 = {1022, "Sofía Martínez", "Desarrollador", 2400.00, "Plaza del Código", "sofia.martinez@example.com", "543210987", "code-sofia"};
    Empleado empleado24 = {1023, "Luisa Rodríguez", "Gerente", 2600.00, "Avenida Estrategia", "luisa.rodriguez@example.com", "432109876", "strategy-luisa"};
    Empleado empleado25 = {1024, "Javier Torres", "Programador", 2000.00, "Calle del Software", "javier.torres@example.com", "987654321", "software-javier"};
    Empleado empleado26 = {1025, "Elena García", "Diseñador", 2200.00, "Avenida Creativa", "elena.garcia@example.com", "876543210", "design-elena"};
    Empleado empleado27 = {1026, "Juan Pérez", "Analista", 2300.00, "Calle Lógica", "juan.perez@example.com", "765432109", "analyst-juan"};
    Empleado empleado28 = {1027, "Marta Torres", "Tester", 2100.00, "Avenida Pruebas", "marta.torres@example.com", "654321098", "testing-marta"};
    Empleado empleado29 = {1028, "Carlos Rodríguez", "Desarrollador", 2400.00, "Plaza del Código", "carlos.rodriguez@example.com", "543210987", "code-carlos"};
    Empleado empleado30 = {1029, "Ana López", "Gerente", 2600.00, "Avenida Estrategia", "ana.lopez@example.com", "432109876", "strategy-ana"};
    Empleado empleado31 = {1030, "Luis Martínez", "Programador", 2000.00, "Calle del Software", "luis.martinez@example.com", "987654321", "software-luis"};
    */
   cout<<"llego a la parte 2"<<endl;
    //equipo1.agregarMiembro(empleado1);
    equipo1.agregarUnMiembro(empleado20);
    equipo1.agregarUnMiembro(empleado19);
    equipo1.agregarUnMiembro(empleado18);
    equipo1.agregarUnMiembro(empleado17);
    equipo1.agregarUnMiembro(empleado16);
    equipo1.agregarUnMiembro(empleado15);
    equipo1.agregarUnMiembro(empleado14);
    equipo1.agregarUnMiembro(empleado15);
    otroVector.push_back(empleado13);
    otroVector.push_back(empleado12);
    otroVector.push_back(empleado11);
    otroVector.push_back(empleado10);
    otroVector.push_back(empleado9);
    otroVector.push_back(empleado8);
    otroVector.push_back(empleado7);
    otroVector.push_back(empleado6);
    otroVector.push_back(empleado5);
    equipo1.setLider(empleado4);
    equipo1.agregarUnMiembro(empleado1);
    equipo1.removerUnMiembro(5);
    vectorEmp = equipo1.getListaMiembros();
    cout<<equipo1.getNumMiembros();
    for(int i=0; i<vectorEmp.size(); i++){
        vectorEmp[i].mostrarEmpleado();
        cout<<endl;
    }
    cout <<"###########se cambia a otro vector###########";
    equipo1.setListaMiembros(otroVector);
    vectorEmp = equipo1.getListaMiembros();
    for(auto f:vectorEmp){
        f.mostrarEmpleado();cout<<endl;
    }

    cout<<endl<<"########################"<<endl;
    
    if(empleado11>empleado10){
        cout<<empleado10;
    }
    
    cout<<endl<<"########################"<<endl;

    cout<<endl<<"########################"<<endl;
    if(empleado10 < empleado11){
        cout<<empleado11;
    }
    cout<<endl<<"########################"<<endl;
  
    equipo1.getLider().mostrarEmpleado();
    cout<<endl<<"#########ORDENAMIENTO###############"<<endl;
    const int tamano = 5;
    Empleado empleados[tamano] = {
        Empleado(3, "Carlos", "Tipo1", 3000.0, "Dir1", "correo1", "123456", "www1"),
        Empleado(1, "Ana", "Tipo2", 2500.0, "Dir2", "correo2", "789012", "www2"),
        Empleado(5, "Eva", "Tipo3", 3500.0, "Dir3", "correo3", "345678", "www3"),
        Empleado(2, "David", "Tipo1", 3200.0, "Dir4", "correo4", "901234", "www4"),
        Empleado(4, "Beatriz", "Tipo2", 2800.0, "Dir5", "correo5", "567890", "www5")
    };

    // Crear una instancia de MetodosOrdenacion para la clase Empleado
    MetodosOrdenacion<Empleado> ordenadorEmpleados;

    // Imprimir empleados antes de ordenar
    cout << "Empleados antes de ordenar:\n";
    for (int i = 0; i < tamano; ++i) {
        empleados[i].mostrarEmpleado();
        cout << endl;
    }

    // Ordenar empleados por el ID
    ordenadorEmpleados.seleccion(empleados, tamano);

    // Imprimir empleados después de ordenar
    cout << "\nEmpleados después de ordenar por ID:\n";
    for (int i = 0; i < tamano; ++i) {
        empleados[i].mostrarEmpleado();
        cout << endl;
    }


    cout<<"El programa finalizo";
    
    return 0;
}