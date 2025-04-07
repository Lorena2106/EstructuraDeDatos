#include "Cola.h"


Cola::Cola() //Constructor
{
	frente = nullptr;
	final = nullptr;
	tamano = 0;
}
void Cola::Encolar(Dato elemento){
	Nodo* nuevo = new Nodo(elemento);

	if (Vacio()) {
		frente = nuevo;
		final = nuevo;
		nuevo->sig = frente;
	}
	else {
		final->sig = nuevo;
		final = nuevo;
		final->sig = frente;
	}
	tamano++;

}
void Cola::Desencolar(){
	if (Vacio())
		return;

	if (frente == final) {
		delete frente;
		frente = nullptr;
		final = nullptr;
	}
	else {
		Nodo* temp = frente;
		frente = frente->sig;
		final->sig = frente;
		delete temp;
	}
	tamano--;
}
bool Cola::Vacio(){
	return frente == nullptr;
}
bool Cola::Lleno(){
	return false;
}
void Cola::MostrarDatos() {
	if (Vacio()) {
		return;
	}

	Nodo* actual = frente;
	do {
		actual = actual->sig;
	} while (actual != frente);
} 
