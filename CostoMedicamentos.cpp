#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <conio.h>

using namespace std;

int main() {
	ostringstream streamObj;
	
	string medicamentos[10][6];
	double precioCosto = 0.0;
	const double GANANCIA_60 = 60; // Ganancia del 60% fijo
	double precioVenta = 0.0;
	const double DESCUNENTO_5 = 5; // Ganancia del 5% fijo
	double precioFinal = 0.0;
	
	for (int i=0; i<10; i++) {
		cout << "CODIGO DEL MEDICAMENTO: ";
		cin>>medicamentos[i][0];
		
		cout << "PRECIO COSTO: ";
		cin >> medicamentos[i][1];
		precioCosto = atof(medicamentos[i][1].c_str());
		
		streamObj << (GANANCIA_60 * precioCosto) / 100;
		medicamentos[i][2] = streamObj.str();
		streamObj.str("");
		
		precioVenta = (precioCosto + ((GANANCIA_60 * precioCosto) / 100));
		streamObj << precioVenta;
		medicamentos[i][3] = streamObj.str();
		streamObj.str("");
		
		streamObj << (DESCUNENTO_5 * precioVenta) / 100;
		medicamentos[i][4] = streamObj.str();
		streamObj.str("");
		
		precioFinal = (precioVenta - ((DESCUNENTO_5 * precioVenta) / 100));
		streamObj << precioFinal;
		medicamentos[i][5] = streamObj.str();
		streamObj.str("");
	}
	
	
	cout << "\nDATOS DE LOS MEDICAMENTOS" << endl;
	for(int i = 0; i < 10; i++) {
		cout << "CODIGO DEL MEDICAMENTO: " << medicamentos[i][0] << endl;
		cout << "PRECIO COSTO: " << medicamentos[i][1] << endl;
		cout << "GANANCIA 60%: " << medicamentos[i][2] << endl;
		cout << "PRECIO VENTA: " << medicamentos[i][3] << endl;
		cout << "DESCUENTO 5%: " << medicamentos[i][4] << endl;
		cout << "PRECIO FINAL: " << medicamentos[i][5] << endl;
	}
	
	getche();
	return 0;
	
	
}
