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
 Cocina::Cocina(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productoDeCocina) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     this->stock = Stock; 
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoCocina = productoDeCocina;
     this->precio = Precio;

}


 
string Cocina::get_ProductoCocina() {
    return this->ProductoCocina;
}

 Cocina::~Cocina() {

}