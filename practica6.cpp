#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar la jugada aleatoria de la computadora
int jugadaComputadora() {
    return rand() % 3; 
}

int main() {
    srand(time(0)); 

    string opciones[3] = {"piedra", "papel", "tijera"};
    int rondasGanadasUsuario = 0;
    int rondasGanadasComputadora = 0;

    cout << "¡Bienvenido al juego de Piedra, Papel o Tijera!" << endl;

    while (rondasGanadasUsuario < 3 && rondasGanadasComputadora < 3) {
        int eleccionUsuario;

        cout << "\nRondas ganadas por Usuario: " << rondasGanadasUsuario << endl;
        cout << "Rondas ganadas por Computadora: " << rondasGanadasComputadora << endl;

        cout << "\nElige una opcion:" << endl;
        cout << "1. Piedra\n2. Papel\n3. Tijera" << endl;
        cout << "Ingrese su eleccion: ";
        cin >> eleccionUsuario;

        // Validar la entrada del usuario
        if (eleccionUsuario < 1 || eleccionUsuario > 3) {
            cout << "Opcion no valida. Por favor elige 1, 2 o 3." << endl;
            continue; // Volver al principio del ciclo
        }

        int eleccionComputadora = jugadaComputadora();

        cout << "Tu eleccion: " << opciones[eleccionUsuario - 1] << endl;
        cout << "Computadora eligio: " << opciones[eleccionComputadora] << endl;

        // Determinar el ganador del turno
        if (eleccionUsuario - 1 == eleccionComputadora) {
            cout << "Empate en este turno." << endl;
        } else if ((eleccionUsuario == 1 && eleccionComputadora == 2) ||
                   (eleccionUsuario == 2 && eleccionComputadora == 0) ||
                   (eleccionUsuario == 3 && eleccionComputadora == 1)) {
            cout << "Tu ganas este turno" << endl;
            rondasGanadasUsuario++;
        } else {
            cout << "La computadora gana este turno" << endl;
            rondasGanadasComputadora++;
        }
    }

    // Resultado final del juego
    cout << "\n--- Resultado Final ---" << endl;
    cout << "Rondas ganadas por Usuario: " << rondasGanadasUsuario << endl;
    cout << "Rondas ganadas por Computadora: " << rondasGanadasComputadora << endl;

    if (rondasGanadasUsuario > rondasGanadasComputadora) {
        cout << "¡Felicidades! ¡Has ganado el juego!" << endl;
    } else {
        cout << "La Computadora gana el juego. ¡Intentalo de nuevo!" << endl;
    }

    return 0;
}
