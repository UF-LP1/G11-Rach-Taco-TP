


#include "Herramientas.h"


Herramientas::Herramientas(float PrecioAlquiler, float PrecioSeguro, const string Modelo, string Condicion, int horasalq):modelo(Modelo) {
    this->precioAlquiler = PrecioAlquiler;
    this->precioSeguro = PrecioSeguro;
    this->condicion = Condicion;
    this->HorasDeAlquiler = horasalq;

}


string Herramientas::get_condicion() {
    return this->condicion;
}


float Herramientas::get_precioAlquiler() {
    return this->precioAlquiler;
}


float Herramientas::get_precioSeguro() {
    return this->precioSeguro;
}


string Herramientas::get_modelo() {
    return this->modelo;
}

 int Herramientas::get_HorasDeAlquiler()
{
    return this->HorasDeAlquiler;
}


void Herramientas::set_precioAlquiler( float precioalq) {
    return; this->precioAlquiler = precioalq;
}

void Herramientas::set_condicion(string cond)
{
    this->condicion = cond;

}

void Herramientas::set_HorasDeAlquiler( int horas)
{
    this->HorasDeAlquiler = horas;
}


void Herramientas::set_precioSeguro( float precioseg) {
     this->precioSeguro=precioseg;
}

Herramientas::~Herramientas() {

}
