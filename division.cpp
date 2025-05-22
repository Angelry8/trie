#include <iostream>
using namespace std;

double division(double g, double h){
    return g/h;
}
int main() {
    double g= 0;
    double h= 0;
    cout <<"Ingrese el primer numero: " <<endl;
    cin >>g;
    cout << "Ingrese el segundo numero: " <<endl;
    cin >> h;
    cout <<"El resultado de la division es: " <<double(division(g, h)) <<endl;


    return 0;
}