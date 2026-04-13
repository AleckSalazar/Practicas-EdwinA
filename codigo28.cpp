#include <windows.h>
#include <iostream>
using namespace std;

int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char c;
    int opcion;
    
    cout<<"Dame un valor binario 0/1: ";
    cin>>c;
    
    switch(c)
    {
        case '0':
            cout<<"Falso o apagado\n";
            break;
        case '1':
            cout<<"Cierto o encendido\n";
            break;
        default:
            cout<<"Tecleaste un valor incorrecto\n";
    }

    system("pause");
    system("cls");
    
    cout<<"1.- QUIMICA\n";
    cout<<"2.- FÍSICA\n";
    cout<<"3.- MATEMÁTICAS\n";
    cout<<"4.- RECREO\n";
    cout<<"SELECCIONA UNA OPCIÓN: ";
    cin>>opcion;
    
    switch(opcion)
    {
        case 1:
            cout<<"SELECCIONASTE QUÍMICA";
            break;
        case 2:
            cout<<"SELECCIONASTE FÍSICA";
            break;
        case 3:
            cout<<"SELECCIONASTE MATEMÁTICAS";
            break;
        case 4:
            cout<<"SELECCIONASTE RECREO";
            break;
        default:
            cout<<"\aSELECCIONASTE UNA OPCIÓN NO VÁLIDA";
    }
    
    return 0;
}