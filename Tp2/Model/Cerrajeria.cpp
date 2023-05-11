
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
 Cerrajeria::Cerrajeria(float Precio, bool Cambio, string EstadoArticulo, string Tipodeproducto, bool Stock, string TipoDeLlave, string productoDeCerrajeria) :Articulo(Precio, Cambio, EstadoArticulo,Tipodeproducto, Stock) { //no se xq da error tipo de producto
     this->stock = Stock;
     this->tipoDeProducto = Tipodeproducto;
     this->ProductoCerrajeria = productoDeCerrajeria;
     this->precio = Precio;

}

string Cerrajeria::get_tipoDeLlave() {
    return this->tipoDeLlave;
}




string Cerrajeria::get_ProductoCerrajeria() {
    return this->ProductoCerrajeria;
}

 Cerrajeria::~Cerrajeria() {

}