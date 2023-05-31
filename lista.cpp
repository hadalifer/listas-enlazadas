#include "lista.h"
#include "Nodo.h"


lista::lista() {
	cabeza = nullptr;
	cola = nullptr;
}

void lista::agregar(string nombre, string telefono) {
	Nodo* nuevoNodo = new Nodo(nombre, telefono);

	if (cabeza == nullptr) {
		cabeza = nuevoNodo;
		cola = nuevoNodo;
	}
	else {
		cola->sig = nuevoNodo;
		nuevoNodo->ant = cola;
		cola = nuevoNodo;

	}
	cout << "Contacto agregado. " << endl;
}


void lista::borrar(string nombre) {
	if (cabeza == nullptr) {
		cout << "La agenda esta vacia." << endl;
		return;
	}

	if (cabeza->nombre == nombre) {
		Nodo* temp = cabeza;
		cabeza = cabeza->sig;
		delete temp;
		cout << "Eliminado correctamente." << endl;
		return;
	}

	Nodo* temp = cabeza;
	while (temp->sig != nullptr && temp->sig->nombre != nombre) {
		temp = temp->sig;
	}

	if (temp->sig == nullptr) {
		cout << "No se encontro el contacto en la agenda." << endl;
		return;
	}

	Nodo* nodoBorrar = temp->sig;
	temp->sig = temp->sig->sig;
	delete nodoBorrar;
	cout << "Contacto borrado." << endl;
}


void lista::listar() {
	if (cabeza == nullptr) {
		cout << "La agenda esta vacia." << endl;
		return;
	}

	Nodo* temp = cabeza;
	while (temp != nullptr) {
		cout << "Nombre: " << temp->nombre << ", Telefono: " << temp->telefono << endl;
		temp = temp->sig;
	}
}
void lista::listarreversa() {
	if (cola == nullptr) {
		cout << "La agenda esta vacia." << endl;
		return;
	}

	Nodo* temp = cola;
	while (temp != nullptr) {
		cout << "Nombre: " << temp->nombre << ", Telefono: " << temp->telefono << endl;
		temp = temp->ant;
	}
}



void lista::modificar(string nombre) {
	if (cabeza == nullptr) {
		cout << "La agenda esta vacia." << endl;
		return;
	}

	Nodo* temp = cabeza;
	while (temp != nullptr) {
		if (temp->nombre == nombre) {
			string nuevoTelefono;
			cout << "Ingrese el nuevo numero de telefono: ";
			cin >> nuevoTelefono;
			temp->telefono = nuevoTelefono;
			cout << "Modificacion hecha!." << endl;
			return;

		}
		temp = temp->sig;

	}

	cout << "No se encontro el contacto." << endl;

}