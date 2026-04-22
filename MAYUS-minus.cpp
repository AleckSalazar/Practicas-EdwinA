#include<iostream>
#include<windows.h>
#include<cctype> // Librería opcional para funciones de caracteres

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char letra;

    cout << "Ingresa una letra: ";
    cin >> letra;

    // Verificamos si la letra está en el rango de las mayúsculas (A-Z)
    if (letra >= 'A' && letra <= 'Z') {
        cout << "La letra '" << letra << "' es MAYÚSCULA." << endl;
    }
    // Verificamos si está en el rango de las minúsculas (a-z)
    else if (letra >= 'a' && letra <= 'z') {
        cout << "La letra '" << letra << "' es minúscula." << endl;
    }
    else {
        cout << "El carácter ingresado no es una letra del alfabeto." << endl;
    }

    return 0;
}