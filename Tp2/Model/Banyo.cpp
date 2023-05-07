/**
 * Project Untitled
 */


#include "Banyo.h"

/**
 * Banyo implementation
 */


/**
 * @param string
 * @param bool
 */
 Banyo::Banyo(string TipoDeProducto, bool Stock, string productoDeBanyo, float Precio, bool Cambio, string EstadoArticulo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     this->stock = Stock;
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoBanyo = productoDeBanyo;
     this->precio = Precio;

}

/**
 * @return string
 */
string Banyo::get_tipoDeProducto() {
    return this->tipoDeProducto;
}

/**
 * @return bool
 */
bool Banyo::get_stock() {
    return this->stock;
}

/**
 * @return enum
 */
string Banyo::get_ProductoBanyo() {
    return this->ProductoBanyo;
}

Banyo::~Banyo() {

}