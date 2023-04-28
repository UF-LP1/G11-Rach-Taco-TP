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
Articulo:: Articulo(float Precio, bool Cambio, string EstadoArticulo, const string TipoDeProducto, bool Stock) {

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
    return this->cambio;
}

/**
 * @return string
 */
string Articulo::get_estadoArticulo() {
    return this->estadoArticulo;
}

/**
 * @param float
 * @return void
 */
void Articulo::set_precio( float price) {
    this->precio=price;
}

string Articulo::get_tipoDeProducto() {
  return this->tipoDeProducto

}

bool Articulo::get_stock() {
    return this->stock;

}



Articulo::~Articulo() {

}