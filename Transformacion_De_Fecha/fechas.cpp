#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

//Declaracion de la funcion para la transformacion de la fecha
int transformacion (int mes){
 //Declaracion del switch

 cout<<"Ingrese el mes"<<endl;
 int meses;
 cin>>meses;



   return meses;
}

main() {

	int dias;
   int meses;
   int anios;

   cout<<"Programa para cambiar la fecha de numeros a letras"<<endl;

   cout<<"Ingrese el dia (1-31)"<<endl;
   cin>>dias;

   cout<<"Ingresa el mes"<<endl;
   cin>>meses;

   cout<<"Ingresa el year"<<endl;
   cin>>anios;

   switch (meses)
 {
 	case 1:
   	cout<<"Es el dia "<<dias<<" Del mes de Enero del "<<anios<<endl;
      break;
   case 2:
   	cout<<"Es el dia "<<dias<<" Del mes de Febrero del "<<anios<<endl;
		break;
   case 3:
  	   cout<<"Es el dia "<<dias<<" Del mes de Marzo del "<<anios<<endl;
      break;
   case  4:
   	cout<<"Es el dia "<<dias<<" Del mes de Abril del "<<anios<<endl;
      break;
   case 5:
   	cout<<"Es el dia "<<dias<<" Del mes de Mayo del "<<anios<<endl;
      break;
   case 6:
   	cout<<"Es el dia "<<dias<<" Del mes de Junio del "<<anios<<endl;
      break;
   case 7:
   	cout<<"Es el dia "<<dias<<" Del mes de Julio del "<<anios<<endl;
      break;
   case 8:
   	cout<<"Es el dia "<<dias<<" Del mes de Agosto del "<<anios<<endl;
      break;
   case 9:
   	cout<<"Es el dia "<<dias<<" Del mes de Septiembre del "<<anios<<endl;
      break;
   case 10:
   	cout<<"Es el dia "<<dias<<" Del mes de Octubre del "<<anios<<endl;
      break;
   case 11:
   	cout<<"Es el dia "<<dias<<" Del mes de Noviembre del "<<anios<<endl;
      break;
   case 12:
   	cout<<"Es el dia "<<dias<<" Del mes de Diciembre del "<<anios<<endl;
      break;
   default:
   	cout<<" Numero de mes, incorrecto, ingrese un numero del 1 al 12 "<<endl;
   }


   system("pause");
   return 0;

   }

