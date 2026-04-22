//programa que lee un número e indique si es par o impar
//#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Dame un numero para determinar si es par o impar: ";
    cin>>n;
    if(n%2)// if (true) el resultado es cero y en C, cero=falso
        cout<<"El numero es impar\n";
    else
        cout<<"El numero es par\n";
    system("pause");
    //condicion en forma explicita
    if(n%2==0)
        cout<<"El numero es par\n";
    else
        cout<<"El numero es impar\n";
    return 0;
}