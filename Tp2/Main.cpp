#include "Model/ArtFerreteria.h"
#include "Model/Articulo.h"
#include "Model/Banyo.h"
#include "Model/Bazar.h"
#include "Model/Cerrajeria.h"
#include "Model/Cerrajero.h"
#include "Model/Clientes.h"
#include "Model/Cocina.h"
#include "Model/Despachante.h"
#include "Model/Duenyo.h"
#include "Model/Electricidad.h"
#include "Model/Empleado.h"
#include "Model/Ferreteria.h"
#include "Model/Herramientas.h"
#include "Model/Plomero.h"
//#include <list>
//#include<string>
//#include <iostream>
using namespace std;


int menu();



int main() {
	float pre;
	Articulo ret = { 500,false,"buen estado","Banyo",true,235,54 };

	list<Articulo> ric;
	list<Herramientas> ric2;
	Banyo ll = { 500,false,"buen estado","Banyo",true,235,180,"Cortina"  }; //creo productos y herramientas para agregar al carrito

	Cocina kk = { 10000,false,"Excelente","Cocina",true,632,70,"Horno" };

	Electricidad ii = { 3,false,"ok","electro",true,233,20,"enchufe" };

	Herramientas gg = { 421,15000,"Moladora","gastada",8 };


	ArtFerreteria oo = { 1,true,"ok","Art.Ferr",false,875,10,"tornillo" }; //prueba caso no stock


	Clientes Ricardo = { "Ricardo","Sanchez","45571328","16:45","Lunes","san lorenzo 565",ric,ric2,4 };

	int opcion;

	

	do 
	{
		opcion = menu();
		switch (opcion) {

		case 1:
			Ricardo.agregarart(ll);
			system("cls");
			break;
		case 2:
			Ricardo.agregarart(kk);
			system("cls");
			break;
		case 3:
			Ricardo.agregarart(ii);
			system("cls");
			break;
		case 4:
			Ricardo.agregarher(gg);
			system("cls");
			break;
		case 5:
			Ricardo.agregarart(oo);
			system("cls");
			break;
		case 6:
			cout << "Gracias por comprar con nosotros"<<endl;
			break;
		default:
			cout << "Seleccion invalida"<<endl;
			
		
}


	} while (opcion != 6);


	getchar();
	cout << "Presiona enter para generar presupuesto"<<endl;
	getchar();

	pre=Ricardo.generarPresupuesto(); //pruebo generar presupuesto

	
	cout << "Su presupusto es:$" << pre<<endl;

	cout << "Presiona enter para funcion polimorfismo Cerrajero";
	getchar();

	Cerrajero carlos = { "carlos","duarte","45571328",500,500,"magentica" }; //pruebo funcion polimorfismo en cerrajero
	carlos.trabajar();

	cout << "Presiona enter para funcion polimorfismo Despachante";
	getchar();

	Despachante Juan = { "Juan","Lopez","52535252",523,522,"Lamborghini Huracan",5 }; //pruebo funcion polimorfismo despachante
	Juan.trabajar();

	cout << "Presiona enter para funcion polimorfismo Plomero";
	getchar();

	Plomero Manuel = { "Manuel","Fernandez","67834163",452,265,true,false };
	Manuel.trabajar();
	getchar();

	
		return 0;

}



int menu() {
	int opcion;
	
	cout << "Opcion 1: Cortina" <<"(codigo:235)"<< endl;
	cout << "Opcion 2: horno" << "(codigo:632)" << endl;
	cout << "Opcion 3: enchufe" << "(codigo:233)" << endl;
	cout << "Opcion 4: Moladora" << endl;
	cout << "Opcion 5: tornillo" << "(codigo:875)" << endl;
	cout << "Opcion 6:salir"<<endl;

	cout << "Ingrese su opcion: ";
	cin >> opcion;

	return opcion;

}
