#include <iostream>//carga la libreria iostream
using namespace std; //establece el nombre del espacio std
int main()//inicio del programa principal
{
    char cad[80];
    string cad2;
    cout<<"Dame una cadena en un arreglo de caracteres (incluidos espacios)";
    gets(cad);
    cout << "El arreglo es: "<<cad; 
    system("pause"); 
    cout << "Dame una cadena con espacios ahora con cin: ";
    cin>> cad2;
    cout<<"\n La segunda cadena es: \""<<cad2<<"\" y no tiene espacios porque cin no sirve para ello: ";
    cout << "\nDe nuevo, dame una cadena con espacios usando getline: ";
    fflush(stdin);
    getline(cin, cad2); 
    cout << "La cadena es \"" << cad2 << "\" ya con espacios" << "\n";
    cout<<"Captura de un arreglo char con getline\n";
    cout << "El arreglo es " << cad << "\n";
    return 0;
}