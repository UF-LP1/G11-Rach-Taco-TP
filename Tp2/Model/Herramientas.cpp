/**
 * Project Untitled
 */


#include "Herramientas.h"

/**
 * Herramientas implementation
 */


/**
 * @param float
 * @param float
 * @param string
 * @param string
 */
Herramientas:: Herramientas(float PrecioAlquiler, float PrecioSeguro, const string Modelo, string Condicion, unsigned int PrecioReal) {

}

/**
 * @return string
 */
string Herramientas::get_condicion() {
    return "";
}

/**
 * @return float
 */
float Herramientas::get_precioAlquiler() {
    return 0.0;
}

/**
 * @return float
 */
float Herramientas::get_precioSeguro() {
    return 0.0;
}

/**
 * @return string
 */
string Herramientas::get_modelo() {
    return "";
}

/**
 * @param float
 * @return void
 */
void Herramientas::set_precioAlquiler( float) {
    return;
}

/**
 * @param float
 * @return void
 */
void Herramientas::set_precioSeguro( float) {
    return;
}

Herramientas::~Herramientas() {

}
unsigned int Herramientas::get_precioReal() {
    return this->precioReal;
}
void Herramientas::set_precioReal(unsigned int pReal) {
    this->precioReal = pReal;
}