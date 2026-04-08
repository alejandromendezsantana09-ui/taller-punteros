#include <iostream>

using namespace std;
int encontrarMayor(int* arreglo, int tam);

int main() {
    int tam;
    int* arreglo;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> tam;
    if (tam <= 0) {
        cout << "Error: El arreglo debe tener al menos un elemento." << endl;
        return 1; 
    }

  
    arreglo = new int[tam];

    for (int i = 0; i < tam; i++) {
        cout << "Ingrese valor " << i + 1 << ": ";
        cin >> *(arreglo + i); 
    }
    int mayor = encontrarMayor(arreglo, tam);

    cout << "\nEl mayor elemento es: " << mayor << endl;
    delete[] arreglo;
    return 0;
}
int encontrarMayor(int* arreglo, int tam) {
    int max = *arreglo; 

    for (int i = 1; i < tam; i++) {
        if (*(arreglo + i) > max) {
            max = *(arreglo + i);
        }
    }

    return max;
}
