#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero;
    cout<<"Dame un número: ";
    cin>>numero;
    if(numero>0)
        cout<<"El número es positivo";
    else if(numero<0)
        cout<<"El número es negativo";
    else
        cout<<"El número es cero";
    return 0;
}