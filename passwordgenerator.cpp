#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphanum[] = "0123456789!@#$%^*_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum);

void generarContrasenas(int cantidad, int longitud) {
    srand(time(0));
    for (int j = 0; j < cantidad; j++) {
        cout << "Contrase�a generada " << j + 1 << ": ";
        for (int i = 0; i < longitud; i++) {
            cout << alphanum[rand() % string_length];
        }
        cout << endl;
    }
}

int main() {
    int cantidad = 0;
    int longitud = 0;
    char opcion;

    do {
        cout << "Ingrese la cantidad de contrase�as a generar: ";
        cin >> cantidad;
        cout << "Ingrese la longitud de cada contrase�a: ";
        cin >> longitud;
        generarContrasenas(cantidad, longitud);

        cout << "�Desea generar m�s contrase�as? (S/N): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

    return 0;
}
