#include<stdio.h>
#include<string>
using namespace std;
#pragma once
class Nodo {
public:
	string nombre;
	string telefono;
	Nodo* sig;
	Nodo* ant;

	Nodo(string nombre, string telefono);

};

