#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float a, b, c, base, altura, s, areaHeron, areaTradicional;
    int valido;

    cout << "Lado a: "; cin >> a;
    cout << "Lado b: "; cin >> b;
    cout << "Lado c: "; cin >> c;

    valido = (a + b > c && a + c > b && b + c > a) ? 1 : 0;
    valido == 1 ? cout << "Válido\n" : cout << "No válido\n";

    s = (a + b + c) / 2;
    areaHeron = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Base: "; cin >> base;
    cout << "Altura: "; cin >> altura;
    areaTradicional = (base * altura) / 2;

    cout << "Área Herón: " << areaHeron << "\nÁrea Tradicional: " << areaTradicional << endl;

    return 0;
}