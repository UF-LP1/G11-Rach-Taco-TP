


#include "ArtFerreteria.h"


ArtFerreteria::ArtFerreteria(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock,int codigo,int tam, string productodeFerreteria) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock,codigo,tam) {
    this->ProductoFerreteria = productodeFerreteria;

}


string ArtFerreteria::get_ProductoFerreteria() {
    return this->ProductoFerreteria;
}

void ArtFerreteria::set_ProdFerreteria(string prod) {
    this->ProductoFerreteria = prod;
}

 ArtFerreteria::~ArtFerreteria() {

}