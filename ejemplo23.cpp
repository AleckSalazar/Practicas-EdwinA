/*programa que obtiene el mayor de tres números*/
#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main( ){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int uno,dos,tres,mayor;
    gotoxy(10,5); cout<<"Captura números>=0";
    gotoxy(10,6); cout<<"Dime el primer número: "; cin>>uno;
    gotoxy(10,7); cout<<"Dime el segundo número: "; cin>>dos;
    gotoxy(10,8); cout<<"Dime el tercer número: "; cin>>tres;
    if(uno==dos&&dos==tres)
        mayor=-1;//número arbitrario
    else
        if (uno>=dos && uno>=tres)
            mayor=uno;
        else
            if (dos>=uno && dos>=tres)
                mayor=dos;
            else
                mayor=tres;
    gotoxy(10,10);
    if (mayor==-1)
        cout<<"Los números son iguales";
    else
        cout<<" el mayor de los tres números es: "<<mayor;
    return 0;
}