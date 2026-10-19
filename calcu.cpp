#include <iostream>
#include <windows.h>
using namespace std;
int main () {

    SetConsoleOutputCP(CP_UTF8);
    float n1, n2, resultado, opcion;

    cout << "Bienvenido, ingrese una opcion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "5. Salir" << endl;
    cin >> opcion;

    
    return 0;
}