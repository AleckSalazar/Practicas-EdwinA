#include <iostream>
#include <windows.h>  // Necesario para configurar la consola en Windows
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);//Configura la salida
    SetConsoleCP(CP_UTF8);//Configura la entrada
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
    cout<<i<<" "<<j<<" "<<k<<endl;//endl=\n
    printf("%d %d %d", i, j, k);
    printf("\a");//beep (alarma)

    return 0;
}