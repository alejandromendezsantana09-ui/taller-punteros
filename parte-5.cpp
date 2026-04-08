
#include <iostream>
#include <iomanip>

using namespace std;


void imprimirComoEntero(int* ptrInt) {
    cout << "\n[Interpretacion como INT]" << endl;
    cout << "Direccion: " << ptrInt << endl;
    cout << "Valor (bits interpretados como int): " << *ptrInt << endl;
}

void imprimirBytes(char* ptrChar, int tam) {
    cout << "\n[Representacion BYTE a BYTE]" << endl;
    for (int i = 0; i < tam; i++) {
        char* actual = ptrChar + i;
        cout << "Direccion: " << (void*)actual 
             << " | Contenido (Hex): " << hex << (int)(unsigned char)(*actual) << dec << endl;
    }
}

int main() {
    float numero;

    cout << "Ingrese un numero decimal (float): ";
    cin >> numero;

    cout << "\n--- Datos Originales ---" << endl;
    cout << "Valor: " << numero << endl;
    cout << "Direccion de memoria: " << &numero << endl;
    cout << "Tamaño en memoria: " << sizeof(numero) << " bytes" << endl;
    int* ptrEntero = (int*)&numero;
    imprimirComoEntero(ptrEntero);
    char* ptrBytes = (char*)&numero;
    imprimirBytes(ptrBytes, sizeof(numero));

    return 0;
}
