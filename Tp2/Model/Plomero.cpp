/**
 * Project Untitled
 */


#include "Plomero.h"

/**
 * Plomero implementation
 */


/**
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
Plomero::Plomero(string nombre, string, string, unsigned int) :Empleado(nombre, apellido, dni, precioservicio, salario) {//no se xq salario tiene error
    {

}

/**
 * @return string
 */
string Plomero::get_nombre() {
    return this->nombre;
}

/**
 * @return string
 */
string Plomero::get_apellido() {
    return this->apellido;
}

/**
 * @return string
 */
string Plomero::get_dni() {
    return this->dni;
}

/**
 * @param unsigned int
 * @return void
 */
void Plomero::set_precioservicio( unsigned int pre) {
    this->precioservicio = pre;
}

/**
 * @return void
 */
void Plomero::trabajoPlomeria() {
    return;
}

/**
 * @return string
 */
string Plomero::get_limpiezaTuberias() {
    return this->limpiezaTuberias;
}

/**
 * @return string
 */
string Plomero::get_mantenimientoTuberia() {
    return this ->mantenimientoTuberias;
}

 Plomero::~Plomero() {

}