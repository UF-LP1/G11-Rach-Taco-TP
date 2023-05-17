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
#include <list>
#include<string>
#include <iostream>
using namespace std;

Clientes operator-(Clientes cli, Articulo art);




int main() {
	float pre;


	list<Articulo> ric;
	list<Herramientas> ric2;
	Banyo ll = { 500,false,"buen estado","Banyo",true,"Cortina" }; //creo productos y herramientas para agregar al carrito

	Cocina kk = { 10000,false,"Excelente","Cocina",true,"Horno" };

	Electricidad ii = { 3,false,"ok","electro",true,"enchufe" };

	Herramientas gg = { 421,15000,"pedro","gastada",8 };

	ArtFerreteria oo = { 1,true,"ok","Art.Ferr",false,"tornillo" }; //prueba caso no stock


	Clientes Ricardo = { "Ricardo","Sanchez","45571328","16:45","Lunes","san lorenzo 565",ric,ric2 };


	Ricardo.agregarher(gg); //agrego productos y herramientas al carrito
	Ricardo.agregarart(ll);
	Ricardo.agregarart(kk);
	Ricardo.agregarart(ii);
	Ricardo.agregarart(oo); 

	cout << "Presiona enter para generar presupuesto";
	getchar();

	pre=Ricardo.generarPresupuesto(); //pruebo generar presupuesto

	
	cout << "su presupusto es:" << pre<<endl;

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


Clientes operator-(Clientes cli, Articulo art) {
	
	int cant,i=0;
	cout << "ingrese cantidad a eliminar";
	cin>>cant;

	list<Articulo>::iterator itArt = cli.get_carritoart().begin();

	for (i = 0; i < cli.get_carritoart().size(); i++,cant--) {
		cli.get_carritoart().remove_if(art.get_codigo());
		if (cant == 0)
			break;
	}
}
