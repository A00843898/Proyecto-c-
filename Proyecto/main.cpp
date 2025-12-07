#include <iostream>
#include <limits>
#include "Futbolista.h"
#include "Basquetbolista.h"
#include "Nadador.h"
#include "EquipoDeDeportes.h"
#include "Deportista.h"


using namespace std;

// ---------- Utilidades de entrada ----------
void limpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int pedirIdNuevo(EquipoDeDeportes &equipo) {
    int id;

    while (true) {
        cout << "ID (entero, que no exista): ";

        if (!(cin >> id)) {
            cout << "Error: el ID debe ser un numero entero. Intenta de nuevo.\n";
            limpiarEntrada();
            continue;   
        }

        
        if (equipo.buscarPosicionPorId(id) != -1) {
            cout << "Error: ya existe un deportista con ese ID. Usa otro.\n";
            limpiarEntrada();
            continue;
        }

        limpiarEntrada(); 
        return id;
    }
}

int pedirIdNumero(const string &mensaje) {
    int id;

    while (true) {
        cout << mensaje;

        if (!(cin >> id)) {
            cout << "Error: el ID debe ser un numero entero. Intenta de nuevo.\n";
            limpiarEntrada();
            continue;
        }

        limpiarEntrada();
        return id;
    }
}

// ---------- Búsquedas por ID ----------

int buscarFutbolistaPorId(vector<Futbolista>& v, int id) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getId() == id) {
            return i;
        }
    }
    return -1;
}

int buscarBasquetbolistaPorId(vector<Basquetbolista>& v, int id) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getId() == id) {
            return i;
        }
    }
    return -1;
}

int buscarNadadorPorId(vector<Nadador>& v, int id) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getId() == id) {
            return i;
        }
    }
    return -1;
}

// ---------- Menús ----------

void mostrarMenuPrincipal() {
    cout << "\n===== MENU PRINCIPAL =====\n";
    cout << "1. Dar de alta deportista (generico) en el equipo\n";
    cout << "2. Gestionar FUTBOLISTAS\n";
    cout << "3. Gestionar BASQUETBOLISTAS\n";
    cout << "4. Gestionar NADADORES\n";
    cout << "5. Mostrar todos los deportistas del equipo\n";
    cout << "6. Buscar deportista del equipo por ID\n";
    cout << "7. Mostrar posicion en el vector por ID\n";
    cout << "0. Salir\n";
    cout << "Selecciona una opcion: ";
}

void menuFutbolistas(vector<Futbolista>& futbolistas, EquipoDeDeportes& equipo) {
    int opcion;

    do {
        cout << "\n--- MENU FUTBOLISTAS ---\n";
        cout << "1. Dar de alta futbolista\n";
        cout << "2. Mostrar todos los futbolistas\n";
        cout << "3. Entrenar futbolista por ID\n";
        cout << "4. Cambiar posicion de un futbolista\n";
        cout << "0. Volver al menu principal\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (cin.fail()) {
            cout << "Opcion invalida.\n";
            limpiarEntrada();
            continue;
        }

        if (opcion == 1) {
		    int id, edad;
		    string nombre, posicion;
		
		    cout << "\nAlta de futbolista\n";
		    id = pedirIdNuevo(equipo);   
		
		    cout << "Nombre: ";
		    getline(cin, nombre);
		
		    cout << "Edad: ";
		    cin >> edad;
		    limpiarEntrada();
		
		    cout << "Posicion: ";
		    getline(cin, posicion);
		
		    Futbolista f(nombre, edad, posicion, id);
		    futbolistas.push_back(f);
		
		    Deportista d(id, nombre, edad);
		    equipo.agregar(d);
		} else if (opcion == 2) {
            cout << "\nLista de futbolistas:\n";
            if (futbolistas.size() == 0) {
                cout << "No hay futbolistas registrados.\n";
            } else {
                for (int i = 0; i < futbolistas.size(); i++) {
                    futbolistas[i].mostrarInfo(); 
                }
            }

        } else if (opcion == 3) {
            int id;
            cout << "\nEntrenar futbolista\n";
            cout << "ID del futbolista: ";
            cin >> id;

            int pos = buscarFutbolistaPorId(futbolistas, id);
            if (pos != -1) {
                futbolistas[pos].entrenar();
            } else {
                cout << "No se encontro futbolista con ese ID.\n";
            }

        } else if (opcion == 4) {
            int id;
            cout << "\nCambiar posicion de futbolista\n";
            cout << "ID del futbolista: ";
            cin >> id;
            limpiarEntrada();

            int pos = buscarFutbolistaPorId(futbolistas, id);
            if (pos != -1) {
                string nuevaPos;
                cout << "Posicion actual: " << futbolistas[pos].getPosicion() << endl;
                cout << "Nueva posicion: ";
                getline(cin, nuevaPos);
                futbolistas[pos].setPosicion(nuevaPos);
                cout << "Posicion actualizada.\n";
            } else {
                cout << "No se encontro futbolista con ese ID.\n";
            }
        }

    } while (opcion != 0);
}

void menuBasquetbolistas(vector<Basquetbolista>& basquetbolistas, EquipoDeDeportes& equipo) {
    int opcion;

    do {
        cout << "\n--- MENU BASQUETBOLISTAS ---\n";
        cout << "1. Dar de alta basquetbolista\n";
        cout << "2. Mostrar todos los basquetbolistas\n";
        cout << "3. Lanzar triple (por ID)\n";
        cout << "4. Cambiar altura de un basquetbolista\n";
        cout << "0. Volver al menu principal\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (cin.fail()) {
            cout << "Opcion invalida.\n";
            limpiarEntrada();
            continue;
        }

        if (opcion == 1) {
		    int id, edad, altura;
		    string nombre;
		
		    cout << "\nAlta de basquetbolista\n";
		    id = pedirIdNuevo(equipo);   
		
		    cout << "Nombre: ";
		    getline(cin, nombre);
		
		    cout << "Edad: ";
		    cin >> edad;
		
		    cout << "Altura (cm): ";
		    cin >> altura;
		
		    Basquetbolista b(nombre, edad, altura, id);
		    basquetbolistas.push_back(b);
		
		    Deportista d(id, nombre, edad);
		    equipo.agregar(d);
		} else if (opcion == 2) {
            cout << "\nLista de basquetbolistas:\n";
            if (basquetbolistas.size() == 0) {
                cout << "No hay basquetbolistas registrados.\n";
            } else {
                for (int i = 0; i < basquetbolistas.size(); i++) {
                    basquetbolistas[i].mostrarInfo();
                }
            }

        } else if (opcion == 3) {
            int id;
            cout << "\nLanzar triple\n";
            cout << "ID del basquetbolista: ";
            cin >> id;

            int pos = buscarBasquetbolistaPorId(basquetbolistas, id);
            if (pos != -1) {
                basquetbolistas[pos].lanzarTriple();
            } else {
                cout << "No se encontro basquetbolista con ese ID.\n";
            }

        } else if (opcion == 4) {
            int id;
            cout << "\nCambiar altura de basquetbolista\n";
            cout << "ID del basquetbolista: ";
            cin >> id;

            int pos = buscarBasquetbolistaPorId(basquetbolistas, id);
            if (pos != -1) {
                int nuevaAltura;
                cout << "Altura actual: " << basquetbolistas[pos].getAltura() << " cm\n";
                cout << "Nueva altura (cm): ";
                cin >> nuevaAltura;
                basquetbolistas[pos].setAltura(nuevaAltura);
                cout << "Altura actualizada.\n";
            } else {
                cout << "No se encontro basquetbolista con ese ID.\n";
            }
        }

    } while (opcion != 0);
}

void menuNadadores(vector<Nadador>& nadadores, EquipoDeDeportes& equipo) {
    int opcion;

    do {
        cout << "\n--- MENU NADADORES ---\n";
        cout << "1. Dar de alta nadador\n";
        cout << "2. Mostrar todos los nadadores\n";
        cout << "3. Mandar a nadar (por ID)\n";
        cout << "4. Cambiar estilo de un nadador\n";
        cout << "0. Volver al menu principal\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (cin.fail()) {
            cout << "Opcion invalida.\n";
            limpiarEntrada();
            continue;
        }

        if (opcion == 1) {
		    int id, edad;
		    string nombre, estilo;
		
		    cout << "\nAlta de nadador\n";
		    id = pedirIdNuevo(equipo);   
		
		    cout << "Nombre: ";
		    getline(cin, nombre);
		
		    cout << "Edad: ";
		    cin >> edad;
		    limpiarEntrada();
		
		    cout << "Estilo: ";
		    getline(cin, estilo);
		
		    Nadador n(nombre, edad, estilo, id);
		    nadadores.push_back(n);
		
		    Deportista d(id, nombre, edad);
		    equipo.agregar(d);
		} else if (opcion == 3) {
            int id;
            cout << "\nMandar a nadar\n";
            cout << "ID del nadador: ";
            cin >> id;

            int pos = buscarNadadorPorId(nadadores, id);
            if (pos != -1) {
                nadadores[pos].nadar();
            } else {
                cout << "No se encontro nadador con ese ID.\n";
            }

        } else if (opcion == 4) {
            int id;
            cout << "\nCambiar estilo de nadador\n";
            cout << "ID del nadador: ";
            cin >> id;
            limpiarEntrada();

            int pos = buscarNadadorPorId(nadadores, id);
            if (pos != -1) {
                string nuevoEstilo;
                cout << "Estilo actual: " << nadadores[pos].getEstilo() << endl;
                cout << "Nuevo estilo: ";
                getline(cin, nuevoEstilo);
                nadadores[pos].setEstilo(nuevoEstilo);
                cout << "Estilo actualizado.\n";
            } else {
                cout << "No se encontro nadador con ese ID.\n";
            }
        }

    } while (opcion != 0);
}

// ---------- main ----------

int main() {
    EquipoDeDeportes equipo;
    vector<Futbolista> futbolistas;
    vector<Basquetbolista> basquetbolistas;
    vector<Nadador> nadadores;

    int opcion;

    do {
        mostrarMenuPrincipal();
        cin >> opcion;

        if (cin.fail()) {
            cout << "Opcion invalida.\n";
            limpiarEntrada();
            continue;
        }

        if (opcion == 1) {
		    int id, edad;
		    string nombre;
		
		    cout << "\nAlta de deportista (generico)\n";
		    id = pedirIdNuevo(equipo);  
		
		    cout << "Nombre: ";
		    getline(cin, nombre);
		
		    cout << "Edad: ";
		    cin >> edad;
		
		    Deportista d(id, nombre, edad);
		    equipo.agregar(d);
		} else if (opcion == 2) {
            menuFutbolistas(futbolistas, equipo);

        } else if (opcion == 3) {
            menuBasquetbolistas(basquetbolistas, equipo);

        } else if (opcion == 4) {
            menuNadadores(nadadores, equipo);

        } else if (opcion == 5) {
            cout << "\n--- Deportistas del equipo ---\n";
            equipo.mostrarTodos();

        } else if (opcion == 6) {
            cout << "\nBuscar deportista del equipo por ID\n";
			int id = pedirIdNumero("ID: ");   
			equipo.mostrarDeportistaPorId(id);

        } else if (opcion == 7) {
		    cout << "\nMostrar posicion en el vector por ID\n";
		    int id = pedirIdNumero("ID: ");  
		
		    int pos = equipo.buscarPosicionPorId(id);
		    if (pos != -1) {
		        cout << "El deportista con ID " << id
		             << " esta en la posicion " << pos
		             << " del vector (comenzando en 0).\n";
		    } else {
		        cout << "No se encontro deportista con ese ID.\n";
		    }
        } else if (opcion == 0) {
            cout << "Saliendo del programa...\n";
        } else {
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 0);

    return 0;
}