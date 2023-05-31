#include "Nodo.h"
#include<iostream>
#include<string>
using namespace std;
#pragma once




class lista {
private:
	Nodo* cabeza;
	Nodo* cola;

public:
	lista();
	void agregar(string nombre, string telefono);
	void borrar(string nombre);
	void listar();
	void listarreversa();
	void modificar(string nombre);

};
