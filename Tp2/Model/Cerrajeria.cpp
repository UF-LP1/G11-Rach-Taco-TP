
/**
 * Project Untitled
 */


#include "Cerrajeria.h"

/**
 * Cerrajeria implementation
 */


/**
 * @param string
 * @param bool
 */
 Cerrajeria(string TipoDellave, bool Stock, string productoDeCerrajeria, float Precio, bool Cambio, string EstadoArticulo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     this->stock = Stock;
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoCerrajeria = productoDeCerrajeria;
     this->precio = Precio;

}

/**
 * @return string
 */
string Cerrajeria::get_tipoDeLlave() {
    return this->tipoDeLlave;
}

/**
 * @return bool
 */
bool Cerrajeria::get_stock() {
    return this->stock;
}

/**
 * @return enum
 */
string Cerrajeria::get_ProductoCerrajeria() {
    return this->ProductoCerrajeria;
}

 Cerrajeria::~Cerrajeria() {

}