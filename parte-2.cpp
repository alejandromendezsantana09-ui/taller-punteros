
#include <iostream>

using namespace std;
int calcularSuma(int* arreglo, int tam);

int main() {
    int tam;
    int* arreglo; 

    cout << "Ingrese el numero de elementos para el arreglo: ";
    cin >> tam;

    arreglo = new int[tam];

  
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el valor para la posicion [" << i << "]: ";
        cin >> arreglo[i]; 
    }
    int sumaTotal = calcularSuma(arreglo, tam);

    cout << "\nLa suma de todos los elementos es: " << sumaTotal << endl;

    delete[] arreglo;
    arreglo = NULL;

    return 0;
}
int calcularSuma(int* arreglo, int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arreglo[i]; 
    }
    return suma;
}
