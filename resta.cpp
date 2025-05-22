#include <iostream>
using namespace std;

double resta(double c, double d){
    return c-d;
}

int main(){
double c= 0;
double d= 0,

cout<< "Escribe el primer numero: " <<endl;
cin >>c;
cout<< "Escribe el segundo numero: " <<endl;
cin >>d;
cout<< "El resultado de la resta es: " <<double(resta(c,d)) <<endl;

    return 0;
}