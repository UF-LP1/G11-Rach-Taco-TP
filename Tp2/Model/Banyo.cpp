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
    return "";
}

/**
 * @return bool
 */
bool Banyo::get_stock() {
    return false;
}

/**
 * @return enum
 */
string get_ProductoBanyo() {
    return;
}

Banyo::~Banyo() {

}