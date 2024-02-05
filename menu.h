#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

struct opcion{
	//tecla y texto de c/opcion del menu
	char texto[40];
	char tecla;
}; 


struct menu{ //Definir una opcion del menu, indicando la tecla
	private:
		//campos
		int totopciones;
		opcion opciones[20];
	public:
		//Prototipos de metodos
		menu();  //constructor
		void agregar(const char* descrip, char tec);
		void ver(void);
		char capturar(void);	
}; 

//Definicion de metodos de struct menu
menu::menu(){ //constructor
	totopciones=0;
}
	
void menu::agregar(const char* descrip, char tec){
	//Adiciona un titulo para el menu a presentar a usuario, 
	//asi como la tecla que debera elegir para esta opcion
	strcpy(opciones[totopciones].texto,descrip);
	opciones[totopciones].tecla=tec;
	totopciones++;
}

void menu::ver(void){
	//despliega las opciones del menu previamente definidas
	//con el metodo agregar()
	int i;
	cout<<"\nMenu..";
	for(i=0; i<totopciones;i++)
	    cout<<"\n "<<opciones[i].tecla<<" ."<<
	    opciones[i].texto;
		cout<<"\n\n\tPresione tecla de la opcion que desea..";
}

char menu::capturar(void){
	//no permite a usuario continuar hasta que elija una 
	//tecla definida en alguna de las opciones del menu
	char elegida;
	int c;
	do{ //ciclo infinito
		elegida=getch(); //captura tecla presionada por usuario
		//compara tecla con el campo tecla de c/opcion del menu
		for(c=0;c<totopciones;c++)
		    if(elegida==opciones[c].tecla){
		  		system("cls");
		  		return(elegida);
		}
	}while(1);
}