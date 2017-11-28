#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

//Desarrolle un programa que calcule el sueldo liquido de "n" empleados,
//ingresando el sueldo nominal, dias del mes, dias trabajados,
//imprima el total de empleados ingresados, el total del igss
//el total de descuentos y el total liquido a recibir.
//Sueldo = Sueldo/diasmes/distrabajados

main() {
	//Declaracion de las variables que se utilizaran para calcular el sueldo
	int numero_empleados;
   int sueldo_nominal;
   int dias_del_mes;
   int dias_trabajados;
   int resultado_sueldo;
   int i;


	//Principio del programa
	cout<<"Programa para calcular el sueldo liquido de n empleados"<<endl;
   cout<<"Ingrese el numero de empleados que desea calcular sueldo liquido"<<endl;
   cin>>numero_empleados;
   for(i=1;i<=numero_empleados;i++){
    cout<<"ingrese el sueldo del nomila del empleado "<<i<<endl;
    cin>>sueldo_nominal;
    cout<<"Ingrese los dias del mes"<<endl;
    cin>>dias_del_mes;
    cout<<"Ingrese los dias trabajados por el empleado "<<i<<endl;
    cin>>dias_trabajados;
    resultado_sueldo=sueldo_nominal/dias_del_mes/dias_trabajados;
    cout<<"El sueldo liquido del empleado "<<i<<" es "<<resultado_sueldo<<endl;
   }


 system("pause");
 return 0;
}
