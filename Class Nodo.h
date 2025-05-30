#include "stdafx.h"
/*
Actualización : Estructura de datos
*/
// librerias
#include <iostream>
#include "stdlib.h"
#include <string>

using namespace std;

class nodo {
public:
  int dato;
  string nombre;
  nodo *sig;  // Puntero al siguiente nodo
};

class pila {
  nodo *inicio;
public:
  pila(){
    inicio=NULL;
  }
  void push(); // apilar
  void pop(); // desapilar
  void show(); // Ver
  void top(); //cima
  void size(); //tamaño
};

//pila.cpp
void pila::push() {
  int valor;
  string valor2;
  nodo *aux = new nodo;
       // ubica espacio de memoria para crear una instancia del nodo: operator new (nodo))
      // y entonces construye un objeto en el nuevo espacio ubicado
  system("cls");
  cout << "Ingresa el id del proceso: ";
  cin >> valor;
  cout << "Ingresa el nombre del proceso: ";
  cin.ignore();
  getline(cin, valor2);
  aux->dato = valor;  //aux.dato  aux->
  aux->nombre = valor2;
  aux->sig = NULL;
       //Accede al elemento dato de nodo y le asigna valor.
  if (inicio != NULL)
    aux->sig = inicio;
  inicio = aux;
  cout << "Nuevo proceso insertado en la pila!\n";
  system("pause");
}

void pila::pop() {
  nodo * temp = new nodo;
  if (inicio == NULL) {
    system("cls");
    cout << "\nLa pila esta vacia!\n\n";
    system("pause");
  } else {
    temp = inicio;
    inicio = inicio->sig;
    system("cls");
    cout << "\nEl proceso eliminado es: " << temp->dato << " - " << temp->nombre << "\n" << endl;
    delete temp;
    system("pause");
  }
}

void pila::show() {
  nodo * aux1 = inicio;
  if (inicio == NULL) {
    system("cls");
    cout << "\nLa pila esta vacia!\n\n";
    system("pause");
  } else {
    system("cls");
    cout << "Procesos:\n" << endl;
    while (aux1 != NULL) {
      cout << aux1->dato << " - " << aux1->nombre << "\n" << endl;
      aux1 = aux1->sig;
    }
    system("pause");
  }
}

void pila::top() {
  nodo * aux1 = inicio;
  if (inicio == NULL) {
    system("cls");
    cout << "\nLa pila esta vacia!\n\n";
    system("pause");
  } else {
    system("cls");
    cout << "Proceso TOP:\n" << endl;
    cout << aux1->dato << " - " << aux1->nombre << "\n" << endl;
    system("pause");
  }
}

void pila::size() {
  nodo * aux1 = inicio;
  if (inicio == NULL) {
    system("cls");
    cout << "\nLa pila esta vacia!\n\n";
    system("pause");
  } else {
    int contador = 0;
    while (aux1) {
      contador++;
      aux1 = aux1->sig;
    }
    system("cls");
    cout << "El tamano de la pila es: '" << contador << "'\n" << endl;
    system("pause");
  }
}

int main() {
  nodo nuevo;
  pila l;
  int opcion;
  do {
    system("cls");
    cout << "[:]Pila en lista enlazada" << endl;
    cout << "[1]Push" << endl;
    cout << "[2]Pop" << endl;
    cout << "[3]Mostrar" << endl;
    cout << "[4]Top" << endl;
    cout << "[5]Size" << endl;
    cout << "[0]Salir" << endl;
    cout << "\nIngresa tu opcion: ";
    cin >> opcion;
    switch (opcion) {
    case 1:
      l.push();
      break;
    case 2:
      l.pop();
      break;
    case 3:
      l.show();
      break;
    case 4:
      l.top();
      break;
    case 5:
      l.size();
      break;
    case 0:
      return 0;
      break;
    default:
      cout << "Por favor ingresa una opcion correcta.\n";
      break;
    }
  } while (opcion!=0);
  return 0;
}
