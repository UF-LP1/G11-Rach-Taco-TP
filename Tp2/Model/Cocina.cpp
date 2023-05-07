/**
 * Project Untitled
 */


#include "Cocina.h"

/**
 * Cocina implementation
 */


/**
 * @param string
 * @param bool
 */
 Cocina::Cocina(string TipoDeProducto, bool Stock, string productoDeCocina, float Precio, bool Cambio, string EstadoArticulo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     this->stock = Stock; 
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoCocina = productoDeCocina;
     this->precio = Precio;

}

/**
 * @return string
 */
string Cocina::get_tipoDeProducto() {
    return this->tipoDeProducto;
}

/**
 * @return bool
 */
bool Cocina::get_stock() {
    return this->stock;
}

/**
 * @return enum
 */
string Cocina::get_ProductoCocina() {
    return this->ProductoCocina;
}

 Cocina::~Cocina() {

}