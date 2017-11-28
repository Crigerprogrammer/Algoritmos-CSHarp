#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int factorial = 1;

    cout<<"Escriba un numero entero, mayor que 0 :";
    cin>>n;

    //El ciclo definira la suma de los numeros enteros
    for(int i=1; i<=n; i++){
        factorial = factorial * i;
    }
    cout<<"El resultado del factorial es: "<<factorial<<endl;
}
