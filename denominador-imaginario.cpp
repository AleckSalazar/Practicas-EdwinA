//programa que pida al usuario dos números y muestre su división
//si el numerador no es cero, o un mensaje de aviso en caso contrario
#include <windows.h>
#include <iostream>
using namespace std;
int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float numerador,denominador;//float da resultado infinito, int aborta
    cout<<"Dame el numerador (dividendo): ";cin>>numerador;
    cout<<"Dame el denominador (divisor): ";cin>>denominador;
    //división sin validar. Marca error si el denominador es 0
    cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
    system("pause");
    //preguntando si es cero de manera explícita
    if(denominador!=0)//si denominador no es 0 entonces es cierto
        cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
    else
        cout<<"La división sobre cero no se permite\n";
    system("pause");
    //preguntado de manera explícita si el denominador es cero
    if(denominador==0)//si denominador es !=0 entonces es cierto
        cout<<"La división sobre cero no se permite\n";
    else
        cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
    system("pause");
    //preguntando sin comparar if(true)
    if(denominador)//si denominador es !=0 entonces es cierto
        cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
    else
        cout<<"La división sobre cero no se permite\n";
    system("pause");
    //preguntando por la negación de un valor diferente de cero
    if(!denominador)//if(false)
        cout<<"La division sobre cero no se permite";
    else
        cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador;
}