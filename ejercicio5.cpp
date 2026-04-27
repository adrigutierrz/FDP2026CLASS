#include <iostream>
#include <cmath>
using namespace std;
int main() {
int temp;
cout <<"Bienvenido al calculador de temperaturas"<< endl;
cout <<"------------------------------"<< endl;
cout <<"Ingresa la temperatura en Celsius: "<< endl;
cin>> temp; 
if (temp < 0){
    cout<<temp<< "C° "<< " Esta frío"<< endl;
}
else
if (temp <= 20)
{
    cout<<temp<< "C° "<< " esta templado"<<endl;
}
else
cout<<temp<< "C° "<< " esta caliente"<<endl;
return 0;
}