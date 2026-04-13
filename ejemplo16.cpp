#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char c = 'x';
    char letras[20] = "Hexadecimal";
    int i = 12345;
    float f = 345.678;

    printf("Entero: %d Flotante: %f Carácter: %c Cadena: %s\n",i,f,c,letras);
    printf("Probando anchos en enteros: %3d %5d %8d\n",i,i,i);
    
    f=123.456;
    printf("Precisión: %7.3f y solo decimales: %.1f\n",f,f);
    
    printf("Probando precisión en cadenas: %10s %15s %.5s\n",letras,letras,letras);
    
    printf("Alineación a la izquierda: %-8d\n",i);
    printf("Relleno con ceros: %08d\n",i);
    printf("%d en octal es %#o y en hexadecimal es %#x\n", i,i,i);
    
    return 0;
}