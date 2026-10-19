#include <iostream>
#include <windows.h>
using namespace std;
int main()
{

    SetConsoleOutputCP(CP_UTF8);
    float n1, n2, resultado;
    int opcion;

    cout << "Bienvenido, ingrese una opcion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Ingrese el primer número: ";
        cin >> n1;
        cout << "Ingrese el segundo número: ";
        cin >> n2;
        cout << "El resultado es " << n1 + n2;
        break;
    case 2:
        cout << "Ingrese el primer número: ";
        cin >> n1;
        cout << "Ingrese el segundo número: ";
        cin >> n2;
        cout << "El resultado es " << n1 - n2;
        break;
    case 3:
        cout << "Ingrese el primer número: ";
        cin >> n1;
        cout << "Ingrese el segundo número: ";
        cin >> n2;
        cout << "El resultado es " << n1 * n2;
        break;
    case 4:
        cout << "Ingrese el primer número: ";
        cin >> n1;
        cout << "Ingrese el segundo número: ";
        cin >> n2;
        cout << "El resultado es " << n1 / n2;
        break;
    default:
    cout << "Opción invalida";
        break;
    }

    return 0;
}