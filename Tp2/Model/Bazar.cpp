/**
 * Project Untitled
 */


#include "Bazar.h"

/**
 * Bazar implementation
 */


/**
 * @param string
 * @param bool
 */
 Bazar::Bazar( string TipoDeProducto,  bool Stock,string ProductoDeBazar, float Precio, bool Cambio, string EstadoArticulo  ):Articulo( Precio,  Cambio,  EstadoArticulo,   TipoDeProducto,  Stock) {
     this->stock = Stock;
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoBazar = ProductoDeBazar;
     this->precio = Precio;
}

/**
 * @return string
 */
string Bazar::get_tipoDeProducto() {
    return this->tipoDeProducto;
}

/**
 * @return bool
 */
bool Bazar::get_stock() {
    return this->stock;
}

/**
 * @return enum
 */
 string Bazar::get_ProductoBazar() {
    return this->ProductoBazar;
}

 Bazar::~Bazar() {

}