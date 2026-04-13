#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x=10, y=3, z=10;
    int *dirz = &z; 

    cout<<x<<"+"<<y<<"="<<x+y<<"\n";
    cout<<x<<" residuo% "<<y<<"="<<x%y<<"\n";
    
    printf("Dame un número: ");
    cin>>x;
    x > 0 ? cout << "positivo" : cout << "negativo"; 
    
    cout << "\nValor de z: " << z << endl;
    cout << "Dirección de z (&z): " << &z << endl;
    cout << "Dirección en puntero dirz: " << dirz << endl;
    cout << "Contenido de lo que apunta dirz (*dirz): " << *dirz << endl;
    
    return 0;
}