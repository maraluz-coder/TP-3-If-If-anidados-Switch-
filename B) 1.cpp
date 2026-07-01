#include<iostream>
using namespace std;

int main()
{
string usuario, contraseña; 

    cout << "Ingrese su nombre de Usuario:" << endl;
    cin >> usuario;
    cout << "Ingrese su contraseña:" << endl;
    cin >> contraseña;
    
    if (usuario == "admin" && contraseña == "1234")
    {
    cout << "Acceso permitido." << endl;
    }
    else
    {
    cout << "Usuario o Contraseña incorrectos." << endl;
    }
    return 0;
}