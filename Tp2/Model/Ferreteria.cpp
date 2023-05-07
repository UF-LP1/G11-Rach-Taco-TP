/**
 * Project Untitled
 */


#include "Ferreteria.h"


/**
 * Ferreteria implementation
 */


/**
 * @param string
 * @param bool
 */
 Ferreteria::Ferreteria( string,  bool, unsigned int l) {

}

/**
 * @param string
 * @return void
 */
void Ferreteria::set_direccion( string dire) {
    this->direccion = dire;
}

/**
 * @return void
 */
string Ferreteria::get_direccion() {
    return this->direccion;
}

/**
 * @return bool
 */
bool Ferreteria::get_abierto() {
    return this->abierto;
}

Ferreteria::~Ferreteria() {

}

unsigned int Ferreteria::get_precioAlquiler() {
    return this->precioAlquiler;
}
void Ferreteria::set_precioAlquiler(unsigned int pAlquiler) {
    this->precioAlquiler = pAlquiler;

}