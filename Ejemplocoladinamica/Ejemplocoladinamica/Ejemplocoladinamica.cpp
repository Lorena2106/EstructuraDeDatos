// Ejemplocoladinamica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#include "Cola.h"
#include "Dato.h"

using namespace std;

int main()
{
    Nodo* inicio = NULL, * fin = NULL; //Punteros libres para el manejo de la cola
    int opc = 0, respuesta = 0;
    Cola colita;
    do {
        cout << "1. LA COLA ESTA VACIA?" << endl;
        cout << "2. ENCOLAR" << endl;
        cout << "3. DESENCOLAR" << endl;
        cout << "0. FINALIZAR" << endl;
        cout << "Opcion: "; cin >> opc;
        cin.ignore();
        switch (opc) {
        case 1:
            if (colita.Vacio())
                cout << "La cola se encuentra vacia" << endl;
            else
                cout << "Existe elemento(s) dentro de la cola" << endl;
            break;
        case 2: {
            Dato elemento;
            cout << "Ingrese la placa: ";
            getline(cin, elemento.placa);
            cout << "Ingrese el modelo: ";
            getline(cin, elemento.modelo);
            cout << "Ingrese la marca: ";
            getline(cin, elemento.marca);
            cout << "Ingrese el color: ";
            getline(cin, elemento.color);

            colita.Encolar(elemento);
            break; 
        }
        case 3:
            colita.Desencolar();
            cout << "Auto desencolado \n";
            break;
        case 0:
            cout << "Finalizando..... \n";
            break;
        }
    } while (opc != 0);

    return 0;
}


