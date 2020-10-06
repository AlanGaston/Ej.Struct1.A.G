#include <iostream> 

using namespace std; 

const int MAX_ANIMALES=3;

typedef struct persona{
	
	  int dni;
	  string nombre; 
	  int edad; 
	  string animales[MAX_ANIMALES]; 

}persona_t; 





int main(){
	

	persona_t datosPersona = {435689479, "nombre", 20, {"gato","perro","no-animal"}}; 


	cout << datosPersona.dni << endl;
	cout << datosPersona.nombre << endl;
	cout << datosPersona.edad << endl;
	cout << datosPersona.animales[0] << endl;

	
	return 0; 

}