#include <iostream>

using namespace std;

int main() {
    int tamano;

    cout << "Ingrese el tamaño que tendra el arreglo: ";
    cin >> tamano;

    int* arreglo = new int[tamano];

    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Elemento " << i + 1 << ": "; cin >> arreglo[i];
    }

    for (int i = 0; i < tamano; ++i) {
        arreglo[i] *= 2;
    }

    cout << "Arreglo con todos sus elementos duplicadoss:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    delete[] arreglo;

}