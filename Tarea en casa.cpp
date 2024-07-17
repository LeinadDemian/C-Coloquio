#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura para guardar la información de una partida
struct Partida {
    string jugador1;
    string jugador2;
    int numeroSecreto;
    int intentos;
};

int main() {
    vector<Partida> partidas; // Vector para almacenar la información de las partidas
    int partidaNumero = 1;    // Contador de número de partida

    cout << "JUEGO ADIVINA EL NÚMERO SECRETO" << endl;

    while (true) {
        Partida partida; // Crear una nueva partida

        cout << "Ingrese nombre jugador/a 1: ";
        cin >> partida.jugador1;

        cout << "Jugador/a 2 ingrese su nombre: ";
        cin >> partida.jugador2;

        cout << "#################" << endl;
        cout << "Partida #" << partidaNumero << endl;

        // Generar un número secreto aleatorio (puedes personalizar el rango)
        partida.numeroSecreto = rand() % 100; // Por ejemplo, aquí el rango es de 0 a 99.
        partida.intentos = 0;

        cout << "Ingrese " << partida.jugador1 << " el número secreto:" << endl;

        while (true) {
            int intento;
            cout << "Ok " << partida.jugador2 << ", empieza a adivinar: ";
            cin >> intento;

            partida.intentos++;

            if (intento < partida.numeroSecreto) {
                cout << "Pista: el número secreto es más grande" << endl;
            } else if (intento > partida.numeroSecreto) {
                cout << "Pista: el número secreto es más chico" << endl;
            } else {
                cout << "¡Muy bien! Adivinó el número en " << partida.intentos << " intentos." << endl;
                break;
            }
        }

        partidas.push_back(partida); // Agregar la partida al vector

        cout << "¿Quieren seguir jugando? 1) Sí 2) No: ";
        int opcion;
        cin >> opcion;

        if (opcion != 1) {
            break; // Terminar el juego si no quieren seguir jugando
        }

        partidaNumero++;
    }

    // Imprimir el resumen de las partidas
    cout << "################" << endl;
    cout << "RESUMEN DE JUGADAS" << endl;
    cout << "| Persona1 | Persona2 | Nro secreto | #Intentos|" << endl;

    for (int i = 0; i < partidas.size(); i++) {
        cout << "#" << i + 1 << "| " << partidas[i].jugador1 << " | " << partidas[i].jugador2 << " | "
             << partidas[i].numeroSecreto << " | " << partidas[i].intentos << " |" << endl;
    }

    cout << "######################## FIN DEL JUEGO ##############" << endl;

    return 0;
}
