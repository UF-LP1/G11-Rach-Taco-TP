


#include "Banyo.h"





 Banyo::Banyo(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productodeBanyo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     this->stock = Stock;
     this->tipoDeProducto = TipoDeProducto;
     this->ProductoBanyo = productodeBanyo;
     this->precio = Precio;

}




string Banyo::get_ProductoBanyo() {
    return this->ProductoBanyo;
}

Banyo::~Banyo() {

}