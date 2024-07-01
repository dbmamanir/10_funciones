#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generador(); 

int main() {
    generador(); 
    return 0;
}

void generador() {
    int maximo, numero;
    cout << "Ingrese el numero maximo: ";
    cin >> maximo;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> numero;

    srand(time(0)); 

    cout << "Los numeros aleatorios son:" << endl;
    for (int i = 0; i < numero; i++) {
        int aleatorio = rand() % maximo + 1; 
        cout << aleatorio << " "; 
    } 
}
