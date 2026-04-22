#include <iostream>
using namespace std;
int main() {
    int cel;
    cout << "Convertir Celsius a Farenheit" << endl;
    cout << "Ingresa el numero C°: "<< endl, cin >> cel; 
    int faren = (cel*1.8) + 32;
    cout << cel << " C° equivalen a: "  << faren << "F°" << endl;
}