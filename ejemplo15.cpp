#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char cad[80];
    int i,j,k;
    float f;
    puts("Usando scanf con juegos de inspección\n");
    cout<<"Dame una cadena con espacios ";
    scanf("%s", cad);
    cout<<cad<<"\n";
    fflush(stdin);
    puts("Dame una cadena de mayúsculas y espacios");
    scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", cad);
    puts(cad);
    puts("Dame una cadena de mayúsculas, minúsculas, Ñ, ñ y espacios\n");
    fflush(stdin);
    scanf("%[ a-zA-ZÑñ]", cad);
    cout<<cad<<"\n";
    puts("Dame una cadena con cualquier caracter y termina con enter");
    fflush(stdin);
    scanf("%[^\n]", cad);
    puts(cad);
    puts("Dame 3 números enteros de máximo 3 cifras");
    scanf("%3d %3d %3d", &i, &j, &k);
    cout<<i<<" "<<j<<" "<<k<<endl;
    printf("%d %d %d", i, j, k);
    printf("\a");
    return 0;
}