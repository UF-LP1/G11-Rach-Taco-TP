

#include "Despachante.h"




 Despachante::Despachante(string Nombre, string Apellido,const string Dni,unsigned int PrecioServicio, unsigned int salario ,string Vehiculo, unsigned int CantPedidos) :Empleado( Nombre,  Apellido,   Dni,   PrecioServicio, salario) {
     this->vehiculo = Vehiculo;
     this->cantPedidos = CantPedidos;
}


 void Despachante::trabajar() {

}


void Despachante::set_vehiculo(string vehi)
{
    this->vehiculo = vehi;
}

void Despachante::set_cantidadPedidos(unsigned int cant)
{
    this->cantPedidos = cant;
}

string Despachante::get_vehiculo() {
    return this->vehiculo;
}


unsigned int Despachante::get_cantPedidos() {
    return this->cantPedidos;
}



 Despachante::~Despachante() {

}