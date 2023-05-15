


#include "ArtFerreteria.h"


ArtFerreteria::ArtFerreteria(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productodeFerreteria) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
    this->ProductoFerreteria = productodeFerreteria;

}


string ArtFerreteria::get_ProductoFerreteria() {
    return this->ProductoFerreteria;
}

 ArtFerreteria::~ArtFerreteria() {

}