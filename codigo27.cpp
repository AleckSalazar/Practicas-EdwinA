#include <windows.h>
#include <iostream>
using namespace std;

int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int d,m,a;
    string mes;
    cout<<"Dame una fecha en este formato: ddmmaaaa";
    scanf("%2d%2d%4d",&d,&m,&a);

    if (m==1)
        mes="Enero";
    else if (m==4)
        mes="Abril";
    else if (m==5)
        mes="Mayo";
    else if (m==6)
        mes="Junio";
    else if (m==7)
        mes="Julio";
    else if (m==8)
        mes="Agosto";
    else if (m==9)
        mes="Septiembre";
    else if (m==10)
        mes="Octubre";
    else if (m==11)
        mes="Noviembre";
    else if (m==12)
        mes="Diciembre";
    else mes="Mes Inválido";

    cout<<"La fecha es: "<<d<<"-"<<mes<<"-"<<a;
    return 0;
}