#include <iostream>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int n=0;
    int suma=0;

    cout<<"Escriba numero entero mayor que 0 :"<<endl<<endl;
    cin>> n;

    //El ciclo definira la suma de los numeros enteros hasta N
    for (int i=0; i<=n; i++){
        suma = suma + i;
    }

    cout<<"La suma de los numeros es : "<<suma<<endl;
    system("Pause");
}
