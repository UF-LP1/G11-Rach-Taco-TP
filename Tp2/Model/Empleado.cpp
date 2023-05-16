


#include "Empleado.h"


Empleado::Empleado(string name, string Apellido, string Dni, unsigned int PrecioServicio, unsigned int Salario):dni(Dni) {
    this->nombre = name;
    this->apellido = Apellido;
    this->precioservicio = PrecioServicio;
    this->salario = Salario;

}


string Empleado::get_nombre() {
    return this->nombre;

}


string Empleado::get_apellido() {
    return this->apellido;
}


string Empleado::get_dni() {
    return this->dni;
}

unsigned int Empleado::get_precioservicio() {
    return this->precioservicio;
}

void Empleado::set_precioservicio (unsigned int pre) {
    this->precioservicio = pre;
}
 void Empleado::trabajar()
{

}
unsigned int Empleado::get_salario() {
    return this->salario;
}
void Empleado::set_nombre(string nom)
{
    this->nombre = nom;
}
void Empleado::set_apellido(string ape)
{
    this->apellido = ape;
}
void Empleado::set_salario(unsigned int sal) {
    this->salario = sal;
    
}
Empleado::~Empleado() {

}
