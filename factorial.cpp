#include <iostream>

using namespace std;

int factorial(int n);

int main(){


    int total = factorial(10);

}

int factorial (int n){

    resultado=0;
    for(i=0; i<=n; i++){
        resultado=resultado*n;
    }

    return resultado;

}
