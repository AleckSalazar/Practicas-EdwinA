#include<iostream> //Biblioteca para entrada y salida estándar
#include <math.h>    //Biblioteca para funciones matemáticas como sqrt()
#include <Windows.h>//Biblioteca para manejar codificación de caracteres en la consola
using namespace std; //Evita escribir std:: antes de cout, cin, etc.

int main() {
    //Configurar la consola para admitir caracteres especiales (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //Declaración de variables
    float a, b, c, base, altura, s, areaHeron, areaTradicional;
    int valido; // Se usa int (1 = verdadero, 0 = falso)

    // Captura de datos del usuario
    cout << "Dame el valor del lado a: ";
    cin >> a;
    cout << "Dame el valor del lado b: ";
    cin >> b;
    cout << "Dame el valor del lado c: ";
    cin >> c;

    //Validar si los lados forman un triángulo usando la desigualdad triangular
    valido = (a + b > c && a + c > b && b + c > a) ? 1 : 0;

    //Si los lados no forman un triángulo, se muestra un mensaje y se termina el programa.
    valido == 1 ? cout << "Lados válidos, se calculará el área.\n"
                : cout << "Los lados no válidos, se calcula el área a pesar de eso.\n";

    //Cálculo del semiperímetro (s) necesario para la fórmula de Herón
    s = (a + b + c) / 2;

    //Cálculo del área usando la fórmula de Herón: A=sqrt(s*(s-a)*(s-b)*(s-c))
    areaHeron = sqrt(s * (s - a) * (s - b) * (s - c));

    //Captura de los valores de base y altura para el cálculo del área con la fórmula tradicional
    cout << "Dame la base del triángulo: ";
    cin >> base;
    cout << "Dame la altura del triángulo: ";
    cin >> altura;

    //Cálculo del área usando la fórmula tradicional: A=(base*altura)/2
    areaTradicional = (base * altura) / 2;

    //Mostrar los resultados de ambos métodos de cálculo de área
    cout << "Área usando la fórmula de Herón: " << areaHeron << "\n"
         << "Área usando la fórmula tradicional: " << areaTradicional << "\n";

    return 0;
}