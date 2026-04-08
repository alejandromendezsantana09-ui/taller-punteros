#include <iostream>

using namespace std;
void duplicar(int* n) {
    *n = (*n) * 2;
}

void triplicar(int* n) {
    *n = (*n) * 3;
}
void procesarArreglo(int* arreglo, int tam, void (*operacion)(int*)) {
    for (int i = 0; i < tam; i++) {
        operacion(arreglo + i); 
    }
}

int main() {
    int tam;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> tam;

    int* miArreglo = new int[tam];

    for (int i = 0; i < tam; i++) {
        cout << "Elemento " << i << ": ";
        cin >> *(miArreglo + i);
    }
    int opcion;
    cout << "\nQue desea hacer?\n1. Duplicar\n2. Triplicar\nOpcion: ";
    cin >> opcion;

    if (opcion == 1) {
        procesarArreglo(miArreglo, tam, duplicar);
    } else {
        procesarArreglo(miArreglo, tam, triplicar);
    }

    cout << "\nArreglo procesado:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << *(miArreglo + i) << " ";
    }
    cout << endl;

    delete[] miArreglo;
    return 0;
}
