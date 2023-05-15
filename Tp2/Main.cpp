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






int main() {
	float pre;


	list<Articulo> ric;
	list<Herramientas> ric2;
	Banyo ll = { 500,false,"buen estado","Banyo",true,"Cortina" };
	Cocina kk = { 10000,false,"Excelente","Cocina",true,"Horno" };
	Clientes Ricardo = { "Ricardo","Sanchez","45571328","16:45","Lunes","san lorenzo 565",ric,ric2 };
	Ricardo.agregarart(ll);
	Ricardo.agregarart(kk);
	pre=Ricardo.generarPresupuesto();

	cout << "su presupusto es:" << pre;
	getchar();
		return 0;

}



