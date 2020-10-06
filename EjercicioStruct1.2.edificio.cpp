#include <iostream> 

using namespace std; 

const int VARIOS_PISOS = 4; 
const int VARIOS_PRECIOS = 4;

typedef struct edificio{
	
	int cant_pisos  [VARIOS_PISOS];
	string nombre; 
	string tiene_ascensor;
	int precio_dia  [VARIOS_PRECIOS];

}edificio_x;

int main(){
	
	edificio_x datos_edificio;

	datos_edificio.cant_pisos[0] = 10;
	datos_edificio.cant_pisos[1] = 12;
	datos_edificio.cant_pisos[2] = 14;
	datos_edificio.cant_pisos[3] = 16;

	datos_edificio.nombre = "Edificio1";
	
	datos_edificio.tiene_ascensor = "Si"; 
	
	datos_edificio.precio_dia[0] = 300;
	datos_edificio.precio_dia[1] = 500;
	datos_edificio.precio_dia[2] = 700;
	datos_edificio.precio_dia[3] = 900;

	cout <<"La cantidad de pisos es: "<< datos_edificio.cant_pisos[2] << endl; 
	cout <<"El nombre del edificio es: "<< datos_edificio.nombre << endl;
	cout <<"Tiene ascensor?: "<< datos_edificio.tiene_ascensor << endl;
	cout <<"El precio por dia es: "<< datos_edificio.precio_dia[2] << endl;

	return 0;
}