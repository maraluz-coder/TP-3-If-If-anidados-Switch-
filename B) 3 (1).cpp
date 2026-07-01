#include <iostream> 
using namespace std; 

 int main() 
{ 
 float temperatura; 
 cout << "Temperatura en C: "; 
 cin >> temperatura;

if (temperatura > 30) 
{
cout << "Hace calor" << endl;
}
else if (temperatura >= 20 && temperatura <= 30)
{
cout << "Temperatura agradable" << endl;
}
else if (temperatura < 20 && temperatura >= 10)
{
cout << "Frío moderado" << endl; 
}
else
{
cout << "Hace mucho frío" << endl;
}
 return 0; 
}