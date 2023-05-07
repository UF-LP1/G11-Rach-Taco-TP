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
 Electricidad::Electricidad(string TipoDeProducto, bool Stock, string ProductoDeElectricidad, float Precio, bool Cambio, string EstadoArticulo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     
     this->stock = Stock;
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoElectricidad = ProductoDeElectricidad;
     this->precio = Precio;

}

/**
 * @return string
 */
string Electricidad::get_tipoDeProducto() {
    return this->tipoDeProducto;
}

/**
 * @return bool
 */
bool Electricidad::get_stock() {
    return this->stock;
}

/**
 * @return enum
 */
string Electricidad::get_ProductoElectricidad() {
    return this->ProductoElectricidad;
}

 Electricidad::~Electricidad() {

}