#include <iostream>//carga la libreria iostream
using namespace std; //establece el nombre del espacio std
int main()//inicio del programa principal
{
    char cad[80];//declara un arreglo de caracteres de 80 posiciones
    string cad2;//declara una variable string
    cout<<"Dame una cadena en un arreglo de caracteres (incluidos espacios)";
    gets(cad);//lee un arreglo char por teclado
    cout << "El arreglo es: "<<cad; //muestra un mensaje y el arreglo cad
    /*//printf("\nPresiona una tecla y continua automaticamente");
    //printf(" y con system no se requiere este letrero:\n");*/
    system("pause"); //detiene la ejecucion esperando una tecla
    cout << "Dame una cadena con espacios ahora con cin: ";
    cin>> cad2;//lee una variable string
    cout<<"\n La segunda cadena es: \""<<cad2<<"\" y no tiene espacios porque cin no sirve para ello: ";
    cout << "\nDe nuevo, dame una cadena con espacios usando getline: ";
    fflush(stdin);
    getline(cin, cad2); //Esta linea no dará problemas con los espacios en el nombre
    cout << "La cadena es \"" << cad2 << "\" ya con espacios" << "\n";
    cout<<"Captura de un arreglo char con getline\n";
    //getline(cin, cad); //esto no funciona
    cout << "El arreglo es " << cad << "\n";
    return 0;
}