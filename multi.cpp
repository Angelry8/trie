#include <iostream>
using namespace std;

double multiplicacion(double e, double f){
    return e*f;
}

    int main() {
    double e= 0;
    double f= 0;
    cout <<"Ingrese el primer numero: " <<endl;
    cin >> e;
    cout <<"Ingrese el segundo numero: " <<endl;
    cin >> f;
    cout <<"El resultado de la multiplicacion es: " <<double(multiplicacion(e, f)) <<endl;

    return 0;
}