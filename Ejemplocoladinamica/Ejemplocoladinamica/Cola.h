#pragma once
#include "Nodo.h"
class Cola
{
private:
	Nodo* frente;
	Nodo* final;
	int tamano;
public:
	Cola(); //Constructor
	void Encolar(Dato elemento);
	void Desencolar();
	bool Vacio();
	bool Lleno();
	void MostrarDatos();
};

