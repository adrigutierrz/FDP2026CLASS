#include <iostream>
using namespace std;
int main() {
    int num1;
    int num2;
    int num3;
    cout << "Calculador de promedios" << endl;
    cout << "Ingresa el primer numero: "<< endl, cin >> num1; 
    cout << "Ingresa el segundo numero: "<< endl, cin >> num2;
    cout << "Ingresa el tercer numero: "<< endl, cin >> num3;
    int suma = num1 + num2 + num3;
    float resultado = (suma/3);
    cout << "El promedio es: " << resultado << endl;
}