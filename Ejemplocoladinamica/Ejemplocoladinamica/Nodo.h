#pragma once
#include "Dato.h"

class Nodo
{
public:
	Dato dato;
	Nodo* sig; // apunta al proximo elemento de la estructura

public:
	Nodo(Dato dato);
};

