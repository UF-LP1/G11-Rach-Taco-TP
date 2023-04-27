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
    return "";
}

/**
 * @return bool
 */
bool Bazar::get_stock() {
    return false;
}

/**
 * @return enum
 */
 string Bazar::get_ProductoBazar() {
    return ;
}

 Bazar::~Bazar() {

}