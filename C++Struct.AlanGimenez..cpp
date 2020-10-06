#include <iostream> 

using namespace std; 

const string DEF_NOMBRE = "DEF NOMBRE"; 

typedef struct persona{
	
	  int dni = -1;
	  string nombre = DEF_NOMBRE; 
	  int edad = -1; 
	  bool animales = false; 

}persona_t; 

void mostrar_campos(persona_t alguien){
	cout << alguien.dni << endl;
	cout << alguien.nombre << endl;
	cout << alguien.edad << endl;
	cout << alguien.animales << endl;

}

int opcion_menu(){
	int opcion_recib; 
	cout << "\tdni" << endl; 
	cout << "\tnombre" << endl; 
	cout << "\tedad" << endl; 
	cout << "\tanimales" << endl;
	cout << "\tmostrar campos []" << endl; 
	cin >> opcion_recib;

	return opcion_recib; 
	
}

void ejecutar_opcion(int opcion_selec, persona_t otra_persona){
	switch(opcion_selec){
		case 3: 
			mostrar_campos(otra_persona);
			break;
		default: 
			cout<< "otra opcion"<< endl; 

	}
}

int main(){
	
	int opcion; 

	opcion = opcion_menu();

	persona_t informacion {435689479, "nombre", 20, true}; 

	ejecutar_opcion(opcion, informacion); 
	
	return 0; 

}