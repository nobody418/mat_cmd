#include <iostream>
#include <string.h>

using namespace std;

// String donde se guarda la linea de comando de la consola
string ln;

// Numero de valores que se ingresaron en ln
int num_val;

// Obtiene la linea de comando del stream de consola
void line_cmd();

float *data();

void line_cmd() {
    // Obtenemos en la string ln el stream de entrada cin
    getline(cin, ln);
    cin.sync();
}

float *data() {
    float *num;

    return num;
}