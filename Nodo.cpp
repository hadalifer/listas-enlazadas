#include "Nodo.h"
Nodo::Nodo(string nombre, string telefono) {
	this->nombre = nombre;
	this->telefono = telefono;
	sig = nullptr;
	ant = nullptr;
}
