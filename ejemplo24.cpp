/*programa que obtiene el mayor de tres números*/
#include <iostream>
#include <windows.h>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int uno,dos,tres,mayor;
    cout<<"Dime el primer número: ";
    cin>>uno;
    cout<<"Dime el segundo número: ";
    cin>>dos;
    cout<<"Dime el tercer número: ";
    cin>>tres;
    if(uno==dos && dos==tres)
        cout<<"Los números son iguales";
    else if (uno>=dos && uno>=tres)
    {
        mayor=uno;
        cout<<"El mayor es "<<uno;
    }
    else if (dos>=tres)
    {
        mayor=dos;
        cout<<"El mayor es "<<dos;
    }
    else
    {
        mayor=tres;
        cout<<"El mayor es "<<tres;
    }
    //cout<<"El mayor es "<<mayor;
    return 0;
}