/**
 * Project Untitled
 */


#include "Despachante.h"




 Despachante::Despachante(string Nombre, string Apellido, string Dni, unsigned int PrecioServicio, string Vehiculo, unsigned int CantPedidios):Empleado( Nombre,  Apellido,   Dni,   PrecioServicio, salario) {//no se xq salario tiene error

}

/**
 * @param Clientes
 * @return void
 */
void Despachante::despachar( Clientes) {
    return;
}

/**
 * @return string
 */
string Despachante::get_nombre() {
    return this->nombre;
}

/**
 * @return string
 */
string Despachante::get_apellido() {
    return this->apellido;
}

/**
 * @return string
 */
string Despachante::get_dni() {
    return this->dni;
}

/**
 * @param unsigned int
 * @return void
 */
void Despachante::set_precioservicio( unsigned int f) {
    this->precioservicio = f;
}

/**
 * @return bool
 */
bool Despachante::trabajoDespachar() {
    return false;
}

/**
 * @return string
 */
string Despachante::get_vehiculo() {
    return this->vehiculo;
}

/**
 * @return unsigned int
 */
unsigned int Despachante::get_cantPedidos() {
    return this->cantPedidos;
}

/**
 * @return enum
 */


 Despachante::~Despachante() {

}