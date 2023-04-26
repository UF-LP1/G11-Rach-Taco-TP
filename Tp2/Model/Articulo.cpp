/**
 * Project Untitled
 */


#include "Articulo.h"

/**
 * Articulo implementation
 */


/**
 * @param string
 * @param bool
 * @param string
 */
void Articulo::Articulo( string,  bool,  string) {

}

/**
 * @return float
 */
float Articulo::get_precio() {
    return this->precio;
}

/**
 * @return bool
 */
bool Articulo::get_cambio() {
    return false;
}

/**
 * @return string
 */
string Articulo::get_estadoArticulo() {
    return "";
}

/**
 * @param float
 * @return void
 */
void Articulo::set_precio( float price) {
    this->precio=price;
}

void Articulo::get_tipoDeProducto() {

}

void Articulo::get_stock() {

}

void Articulo::Articulo() {

}
void Articulo::set_precioFab(unsigned pFab) {
    this->precioFab = pFab;
}
unsigned int Articulo::get_precioFab() {
    return this->precioFab;
}