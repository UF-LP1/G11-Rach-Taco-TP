


#include "ArtFerreteria.h"


ArtFerreteria::ArtFerreteria(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productodeFerreteria) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
    this->stock = Stock;
    this->precio = Precio;
    this->tipoDeProducto=TipoDeProducto;
    this->ProductoFerreteria = productodeFerreteria;

}


string ArtFerreteria::get_ProductoFerreteria() {
    return this->ProductoFerreteria;
}

 ArtFerreteria::~ArtFerreteria() {

}