#include<iostream>
using namespace std;

int main()
{
float precioUnitario, subtotal, totalFinal;
float descuento; 
int cantidad; 

    cout << "Ingrese el precio unitario del producto." << endl;
    cin >> precioUnitario; 
    cout << "Ingrese la cantidad total comprada." << endl;
    cin >> cantidad; 
    subtotal = precioUnitario * cantidad; 
    
    if (cantidad < 5) 
    {
    descuento = 0;
    }
    else 
    {
    if (cantidad >= 5 && cantidad <= 10) 
    {
    descuento = subtotal * 0.10; 
    }
    else
    {
    if (cantidad > 10)
    {
    descuento = subtotal * 0.20;
    }
    }
    }
    totalFinal = subtotal - descuento; 
    
    cout << "" << endl;
    cout << "Subtotal sin descuento: $" << subtotal << endl;
    cout << "dinero descontado: $" << descuento << endl;
    cout << "Total final a pagar: $" << totalFinal << endl;
    
    
    return 0;
}