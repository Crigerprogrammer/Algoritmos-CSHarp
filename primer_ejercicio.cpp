#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int suma = 0;

    cout<<"Escriba un numero entero, mayor que 0 :";
    cin>>n;

    //El ciclo definira la suma de los numeros enteros
    for(int i=0; i<=n; i++){
        suma = suma + i;
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
}
