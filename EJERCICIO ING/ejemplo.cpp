#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

//Declaracion de la funcion que hara la operacion de los cuadrados
int cuadrado (int x){

  	//Declaracion de la variable r para almacenar el valor del numero x
	int r;

   //Asignacion del producto en la variable r
   r = x*x;

   //Regresar el valor r de la funcion para luego llamarla en la funcion principal
   return r;

}

main() {

	//Declaracion de la variable iterativa y del resultado, que tendra el valor de todo
 int i, resultado;

 	//Creacion del ciclo para llegar al limite
 for (i=0;i<10;i++){
 	//Asignacion del resultado en la variable resultado
  	resultado = cuadrado (i);
   //Impresion de los datos a consola
   cout<<"Cuadrado de " <<i<<" es.... " << resultado<< endl;
 }


 //System pause, sirve para pausar el codigo
 system("pause");
 return 0;

}