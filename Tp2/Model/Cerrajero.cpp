/**
 * Project Untitled
 */


#include "Cerrajero.h"

/**
 * Cerrajero implementation
 */


/**
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 Cerrajero::Cerrajero( string,  string,  string,  unsigned int):Empleado( nombre,  apellido,   dni,   precioservicio, salario) { //no se xq me sale error aca

}

/**
 * @param Clientes
 * @return void
 */
void cerrajeria( Clientes) {
    return;
}

/**
 * @return string
 */
string Cerrajero::get_nombre() {
    return this->nombre;
}

/**
 * @return string
 */
string Cerrajero::get_apellido() {
    return this->apellido;
}

/**
 * @return string
 */
string Cerrajero::get_dni() {
    return this->dni;
}

/**
 * @param unsigned int
 * @return void
 */
void Cerrajero::set_precioservicio( unsigned int precio) {
    this->precioservicio=precio;
}

/**
 * @return void
 */
void trabajoCerrajeria() {
    return;
}

/**
 * @return string
 */
string Cerrajero::get_tipoDeLlave() {
    return this->tipoDeLLave;
}

 Cerrajero::~Cerrajero() {

}