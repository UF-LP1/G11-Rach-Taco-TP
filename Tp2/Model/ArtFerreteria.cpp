/**
 * Project Untitled
 */


#include "ArtFerreteria.h"

/**
 * ArtFerreteria implementation
 */


/**
 * @param string
 * @param bool
 */
ArtFerreteria::ArtFerreteria(string TipoDeProducto, bool Stock, string productoDeFerreteria, float Precio, bool Cambio, string EstadoArticulo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
    this->stock = Stock;
    this->precio = Precio;
    this->tipoDeProducto=TipoDeProducto;
    this->ProductoFerreteria = productoDeFerreteria;

}

/**
 * @return string
 */
string ArtFerreteria::get_tipoDeProducto() {
    return "";
}

/**
 * @return bool
 */
bool ArtFerreteria::get_stock() {
    return false;
}

/**
 * @return enum
 */
string ArtFerreteria::get_ProductoFerreteria() {
    return null;
}

 ArtFerreteria::~ArtFerreteria() {

}