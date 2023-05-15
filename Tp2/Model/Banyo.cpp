


#include "Banyo.h"





 Banyo::Banyo(float Precio, bool Cambio, string EstadoArticulo, string TipoDeProducto, bool Stock, string productodeBanyo) :Articulo(Precio, Cambio, EstadoArticulo, TipoDeProducto, Stock) {
     
     this->ProductoBanyo = productodeBanyo;
  

}




string Banyo::get_ProductoBanyo() {
    return this->ProductoBanyo;
}

Banyo::~Banyo() {

}