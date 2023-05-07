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
Herramientas::Herramientas(float PrecioAlquiler, float PrecioSeguro, const string Modelo, string Condicion) {
    this->precioAlquiler = PrecioAlquiler;
    this->precioSeguro = PrecioSeguro;
    this->condicion = Condicion;

}

/**
 * @return string
 */
string Herramientas::get_condicion() {
    return this->condicion;
}

/**
 * @return float
 */
float Herramientas::get_precioAlquiler() {
    return this->precioAlquiler;
}

/**
 * @return float
 */
float Herramientas::get_precioSeguro() {
    return this->precioSeguro;
}

/**
 * @return string
 */
string Herramientas::get_modelo() {
    return this->modelo;
}

/**
 * @param float
 * @return void
 */
void Herramientas::set_precioAlquiler( float precioalq) {
    return; this->precioAlquiler = precioalq;
}

/**
 * @param float
 * @return void
 */
void Herramientas::set_precioSeguro( float precioseg) {
     this->precioSeguro=precioseg;
}

Herramientas::~Herramientas() {

}
