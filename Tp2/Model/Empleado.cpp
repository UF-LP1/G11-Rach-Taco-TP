/**
 * Project Untitled
 */


#include "Empleado.h"

/**
 * Empleado implementation
 */


string Empleado::get_nombre() {
    return this->nombre;

}

/**
 * @return string
 */
string Empleado::get_apellido() {
    return this->apellido;
}

/**
 * @return string
 */
string Empleado::get_dni() {
    return this->dni;
}

/**
 * @param unsigned int
 * @return void
 */
void Empleado::set_precioservicio (unsigned int pre) {
    this->precioservicio = pre;
}
unsigned int Empleado::get_salario() {
    return this->salario;
}
void Empleado::set_salario(unsigned int sal) {
    this->salario = sal;
    
}
