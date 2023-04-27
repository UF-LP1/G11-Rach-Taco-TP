/**
 * Project Untitled
 */


#include "Electricidad.h"

/**
 * Electricidad implementation
 */


/**
 * @param string
 * @param bool
 */
 Electricidad(string TipoDeProducto, bool Stock, string ProductoDeElectricidad, float Precio, bool Cambio, string EstadoArticulo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     
     this->stock = Stock;
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoElectricidad = ProductoDeElectricidad;
     this->precio = Precio;

}

/**
 * @return string
 */
string Electricidad::get_tipoDeProducto() {
    return "";
}

/**
 * @return bool
 */
bool Electricidad::get_stock() {
    return false;
}

/**
 * @return enum
 */
string Electricidad::get_ProductoElectricidad() {
    return null;
}

 Electricidad::~Electricidad() {

}