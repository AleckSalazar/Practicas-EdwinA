#include <windows.h>
#include <iostream>
using namespace std;

int main( )
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int d,m,a;
    string mes;
    cout<<"Dime el día:";
    cin>>d;
    cout<<"Dime el mes:";
    cin>>m;
    cout<<"Dime el año:";
    cin>>a;
    if(m==1){
        mes="enero";
    }
    if(m==2){
        mes="febrero";
    }
    if(m==3){
        mes="marzo";
    }
    if(m==4){
        mes="abril";
    }
    if(m==5){
        mes="mayo";
    }
    if(m==6){
        mes="junio";
    }
    if(m==7){
        mes="julio";
    }
    if(m==8){
        mes="agosto";
    }
    if(m==9){
        mes="sep";
    }
    if(m==10){
        mes="oct";
    }
    if(m==11){
        mes="nov";
    }
    if(m==12){
        mes="dic";
    }
    cout<<"la fecha es "<<d<<" de "<<mes<<" de "<<a;
    return 0;
}