#include <iostream>
#include <string.h>

using namespace std;

// String donde se guarda la linea de comando de la consola
string ln;

// Numero de valores que se ingresaron en ln
int num_val;

// Obtiene la linea de comando del stream de consola
void line_cmd();

// Cuenta el numero de valores de ln
void cont_val();

// Extrae los valores numericos de ln
float *data();

void line_cmd() {
    // Obtiene en la string ln el stream de entrada cin
    getline(cin, ln);
    cin.sync();

    // Cuenta el numero de datos entre '+'
    cont_val();
}

void cont_val() {
    if (!ln.length()) {
        num_val = 0;
        return;
    }
    num_val = 1;
    string sln = ln;
    int pos = sln.find("+");

    // Recorre arreglo buscando el delimitador '+'
    while (pos != string::npos) {
        // Cuenta el numero de valores entre delimitador '+'
        num_val++;
        sln.erase(0, pos + 1);
        pos = sln.find("+");
    }
}

float *data() {
    // Arreglo de los datos con tamano de num_val
    float *num = new float[num_val];

    // Copia de ln para realizar la lectura
    string sln = ln;
    int pos = sln.find("+");
    int i = 0;
    try {
        // Recorre la string y convierte los numeros a datos
        while (pos != string::npos) {
            num[i] = stof(sln.substr(0, pos));
            sln.erase(0, pos + 1);
            pos = sln.find("+");
            i++;
        }

        num[i] = stof(sln);
    } catch (...) {
        cout << "Error de ingreso\n";
    }
    return num;
}