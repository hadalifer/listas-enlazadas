#include "lista.h"
#include <iostream>
using namespace std;



int main() {
    lista agenda;
    int opcion, borrar;
    string nombre, telefono;

    do {
        system("cls");
        cout << "----------agenda----------" << endl;
        cout << "/  1. Agregar contacto   /" << endl;
        cout << "/  2. Borrar contacto    /" << endl;
        cout << "/  3. Listar contactos   /" << endl;
        cout << "/  4. Listar al reves    /" << endl;
        cout << "/  5. Modificar contacto /" << endl;
        cout << "/  6. Salir              /" << endl;
        cout << "--------------------------" << endl;
        cout << " Ingrese una opcion:  " << endl;
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            cout << "Ingrese el nombre: ";
            cin >> nombre;
            cout << "Ingrese el numero de telefono de " << nombre << ": ";
            cin >> telefono;
            agenda.agregar(nombre, telefono);
            system("pause");
            break;
        case 2:
            system("cls");
            agenda.listar();
            cout << "Ingrese el nombre del contacto a borrar: ";
            cin >> nombre;
            cout << "confirmar borrar a " << nombre << "\n si = 1 \n no = 2";
            cin >> borrar;
            if (borrar == 1) {
                agenda.borrar(nombre);
            }
            else {
                break;
            }
            system("pause");
            break;
        case 3:
            system("cls");
            agenda.listar();
            system("pause");
            break;
        case 4:
            system("cls");
            agenda.listarreversa();
            system("pause");
            break;
        case 5:
            system("cls");
            cout << "Ingrese el nombre del contacto a modificar: ";
            cin >> nombre;
            agenda.modificar(nombre);
            system("pause");
            break;
        case 6:
            system("cls");
            cout << "Saliendo del programa." << endl;
            system("pause");
            break;
        default:
            cout << "Opción invalida. Intente nuevamente." << endl;
            system("pause");
            break;
        }

        cout << endl;
    } while (opcion != 5);

    return 0;
}